# Chiffrement

Nom et prénom: Delmote Adrien et Richards Louis

Objectif:
Le but de l'application est de chiffrer ou déchiffrer un message selon la méthode de César ou de Vigenère, de plus,
l'application vérifie si le message ne contient pas de caractère spéciaux et remplace les accents.

Fonctionnalité:
Quand vous lancez l'application, la console vous demande d'écrire un message, ce message peut contenir des accents
mais pas de caractères spéciaux sinon un message d'erreur s'affiche, après le message, la console vous demande de
choisir un alogrithme: 1 pour César, 2 pour Vigenere, si vous ne faites pas 1 ou 2 un message d'erreur s'affiche.
Si vous avez choisi César, vous devez entrer un code entre 0 et 100 si le code n'est pas dans cette intervalle,
un message d'erreur s'affiche, puis vous devez choisir entre le chiffrement ou le déchiffrement de César, 1 pour
chiffrement, 2 pour le déchiffrement, là aussi, si vous ne faites pas 1 ou 2 un message d'erreur s'affiche.
Pour Vigenere, vous devez choisir un code qui peut être une chaine de caratères, ensuite vous devez, comme pour César
mettre 1 ou 2 pour le chiffrement ou le déchiffrement.

Documentation:

    -main:
    	-descprition: la fonction (qui est la fonction principal) demande a l'utilisateur un message ainsi que le code selon son algorithme choisi ainsi que si il veut chiffrer ou dechiffrer le message
    	-entrée: le message, le code, et 1 ou 2 qui va permettre d echoisir l'algortihme, le chiffrement ou le dechiffrement
    	-sortie: le message coder ou décoder
    	-cas d'erreur: si le code pour cesar n'est pas entre 0 et 100 et si pour les choix (la variable c) le numero n'est pas 1 ou 2

    -chiffrerCesar:
    	-description: chiffre un message selon l'algorithme de César
    	-entrée: le message et la clé
    	-sortie: le message chiffré

    -dechiffrerCesar:
    	-description: déchiffre un message selon l'algorithme de César
    	-entrée: le message chiffrée et la clé
    	-sortie: le message déchiffrer

    -chiffrerVigenere:
    	-description: chiffre un message selon l'algorithme de Vigenere
    	-entrée: le message chiffrée et la clé
    	-sortie: le message déchiffrer

    -dechiffrerVigenere:
    	-description: déchiffre un message selon l'algorithme de Vigenere
    	-entrée: le message chiffrée et la clé
    	-sortie: le message déchiffrer

    -verificationAlphanumerique:
    	-description: vérifie si le message ne contient pas de caractère Alphanumérique
    	-entrée: le message
    	-sortie: si le message continent des caractère spéciaux un message apparait

    -accent:
    	-descipition: remplace les accents dans le message par leurs caractère sans accent
    	-entrée: le message
    	-sortie: le message sans accent

    -conv:
    	-descipition: remplace l'accent dans un caractère par leurs caractère sans accent
    	-entrée: un caractère contenu dans le message
    	-sortie: le même caractère mais sans les accent

    -viderBuffer:
    	-descipition: vide le buffer pour pouvoir reutiliser des getchar
    	-sortie il vide le cache

ATTENTION: Nous avons un problème avec notre C il ne détectait pas les accents, ils etaient représentés par des
caractère "cassé" donc pour verifier si Alphanumérique et accent fonctionner nous avons du écrire le message
directement dans le code, donc normalement c'est censé fonctionner. Nous sommes navrés de cet inconvéniant.

https://framagit.org/Louiis/chiffrement.git
