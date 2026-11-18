
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstddef>
#include "torneo.h"
#include "utilerias.h"

// 1. Validar longitud del nombre
inline bool largoValido(const std::string& nombre)
{
    if (nombre.length() < MIN_CARACTERES_NOMBRE)
        return false;

    if (nombre.length() > MAX_CARACTERES_NOMBRE)
        return false;

    return true;
}

// 2. Validar letras y espacios
inline bool sinAcentos(const std::string& nombre)
{
    for (std::size_t i = 0; i < nombre.length(); i++)
    {
        char letra = nombre[i];

        if (!((letra >= 'A' && letra <= 'Z') ||
              (letra >= 'a' && letra <= 'z') ||
              letra == ' '))
        {
            return false;
        }
    }

    return true;
}

// 3. Convertir texto a minusculas
inline std::string aMinusculas(std::string texto)
{
    for (std::size_t i = 0; i < texto.length(); i++)
    {
        texto[i] = static_cast<char>(
            std::tolower(static_cast<unsigned char>(texto[i]))
        );
    }

    return texto;
}

// 4. Comprobar nombres repetidos
inline bool nombreRepetido(
    const std::string& nombre,
    const Equipo equipos[],
    int cantidad)
{
    std::string nombreMin = aMinusculas(nombre);

    for (std::size_t i = 0;
         i < static_cast<std::size_t>(cantidad); i++)
    {
        if (aMinusculas(equipos[i].nombre) == nombreMin)
            return true;
    }

    return false;
}

// 5. Registrar equipo
inline void registrarEquipo(Equipo equipos[], int& cantidad)
{
    if (cantidad >= MAX_EQUIPOS)
    {
        std::cout << "Lista llena, no se pueden registrar mas equipos.\n";
        return;
    }

    std::string nombre;
    bool valido = false;

    while (!valido)
    {
        nombre = leerCadena("Nombre del equipo: ");

        if (!largoValido(nombre))
        {
            std::cout << "Error: longitud de nombre no valida.\n";
        }
        else if (!sinAcentos(nombre))
        {
            std::cout << "Error: solo se permiten letras y espacios.\n";
        }
        else if (nombreRepetido(nombre, equipos, cantidad))
        {
            std::cout << "Error: el equipo ya esta registrado.\n";
        }
        else
        {
            valido = true;
        }
    }

    equipos[cantidad].nombre = nombre;
    cantidad++;

    std::cout << "Equipo registrado correctamente.\n";
}

// 6. Mostrar equipos
inline void mostrarEquipos(const Equipo equipos[], int cantidad)
{
    if (cantidad == 0)
    {
        std::cout << "No hay equipos registrados.\n";
        return;
    }

    std::cout << "\n--- EQUIPOS REGISTRADOS ---\n";
    std::cout << std::left;
    std::cout << std::setw(4) << "#"
              << "EQUIPO\n";

    for (std::size_t i = 0;
         i < static_cast<std::size_t>(cantidad); i++)
    {
        std::cout << std::setw(4) << i + 1
                  << equipos[i].nombre << '\n';
    }
}

