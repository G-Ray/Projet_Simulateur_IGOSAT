#pragma once
#include <unordered_map>
#include <string>
#include <sstream>
#include <iostream>

/*!
* \class Memory
* \brief Repr�sente une m�moire
*
* La m�moire est ici simplement mod�lis�e comme une liste de cl�es et de valeurs, associ�e � des contraintes.
*/
template <class T>
class Memory
{
private:
    std::unordered_map<std::string, T> cells; /*!< Les cellules de memoire */
public:
    /*!
    * \fn Memory()
    * \brief Constructeur
    */
    Memory();
    
    /*!
     * \fn Memory(std::unordered_map<std::string, T>)
     * \brief Constructeur parametris� avec cells
     */
    Memory(std::unordered_map<std::string, T>);
    
    /*!
     * \fn  unsigned int getSize();
     * \brief Retourne la taille courante de la memoire
     */
    unsigned int getSize();
    
    /*!
     * \fn  int setValueForKey(std::string key, T value);;
     * \brief �crit une valeur "value" dans la case memoire avec un nom "key"
     */
    int setValueForKey(std::string, T);

    /*!
    * \fn ~Memory()
    * \brief Destructeur
    */
    ~Memory();
};

