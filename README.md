# My Little SQLite3

## C'est quoi SQLite ?

SQLite est une base de données SQL embarquée qui ne nécessite pas de serveur et stocke toutes les données dans un seul fichier.
En d'autres termes, c'est une banque d'informations protégée localement, comparée à d'autres qui sauvegardent les données sur un cloud.

## Comment sont stockées les informations ?

SQLite stocke les informations dans un seul fichier unique sous une structure de B-tree.
Ce fichier est découpé en pages fixes de 4096 octets regroupant :
- Métadonnées
- Nœuds d’index
- Lignes de tables
- Et d’autres structures internes
