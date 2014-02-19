#pragma once

#include <string>

/*!
* \class Socket
* \brief Classe abstraite pour les connecteurs des modules
*
* Les sockets mod�lisent les connections entre les modules.
* Un connecteur peut-�tre soit un connecteur d'entr�e, \a InSocket, soit un connecteur de sortie, \a OutSOcket. 
* Les connecteurs sont reli�s entre-eux via les objets Connexion.
*/

class Socket
{
public:
    /*! \enum Socket::stype
    * Simple �num�ration pour les diff�rents types de sockets
    *
    * \var Socket::stype::IN
    * Caract�rise un connecteur d'entr�e.
    *
    * \var Socket::stype::OUT
    * Caract�rise un connecteur de sortie.
    */
    enum stype { IN, OUT };

private:
    stype type;         /*!< Type du connecteur */
    std::string name;   /*!< Nom du connecteur */

public:
    /*!
    * \fn Socket()
    * \brief Constructeur
    */
    Socket();

    /*!
    * \fn virtual ~Socket()
    * \brief Destructeur
    */
    ~Socket();
};

