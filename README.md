# My Little SQLite3

Executable: ./sqlite ./sqlite file.mbd

Si le fichier n'existe pas alors il sera crée

Si aucun fichier n'est ouvert : « Connected to a transient in-memory database »

./sqlite --version
3.43.2 (date) (heure) 1b37c146ee9ebb7acd0160c0ab1fd11017a419fa8a3187386ed8cb32b709aapl (64-bit)

sauvegarde manuelle:
sqlite3 ma_base_de_donnees.mdb ".backup ma_base_de_donnees_backup.mdb"

SQLite version 3.43.2 date du jour heure actuel
Enter ".help" for usage hints.

-----COMMANDE SPECIALES-----
sqlite> .exit | .quit
echo $?
=> 0

sqlite> .tables
etablissements etudiants

sqlite> .database
main: chemins de la database permission

sqlite> .save path/file.mdb

sqlite> .open path/file.mbd

-----REQUETES-----
sqlite> SELECT * FROM etudiants;
1|gorale|annel|567890
2|gorale|fabrice|098689
3|gorale|hercule|765654

UPDATE utilisateurs SET email = 'alice@newdomain.com' WHERE nom = 'Alice';

INSERT INTO utilisateurs (nom, email) VALUES ('Bob', 'bob@example.com');

DELETE FROM utilisateurs WHERE nom = 'Alice';

Creation de table:
	CREATE TABLE utilisateurs (
    		id INTEGER PRIMARY KEY,
    		nom TEXT NOT NULL,
    		email TEXT NOT NULL UNIQUE
	);

 	Si aucune table n'est ouverte : « Connected to a transient in-memory database »

-----TYPE DE DONEES-----
INTEGER = un entier
TEXT = Une chaine de carathere
REAL = Un nombre a virgule flotante
BLOB: Données binaires (Binary Large Object)


-----BONUS-----
Exporter vers CSV
.mode csv
.output utilisateurs.csv
SELECT * FROM utilisateurs;

Importer depuis CSV
.mode csv
.import utilisateurs.csv utilisateurs

---

Transaction & rollback

Les transactions garantissent que toutes les opérations SQL effectuées dans un bloc de transaction sont traitées comme une seule unité. Si une erreur survient, toutes les opérations peuvent être annulées en utilisant ROLLBACK.

BEGIN TRANSACTION;
INSERT INTO utilisateurs (nom, email) VALUES ('David', 'david@example.com');
UPDATE utilisateurs SET email = 'david@newdomain.com' WHERE nom = 'David';
COMMIT; OR ROLLBACK;

---

SELECT clients.nom, commandes.produit, commandes.quantite
FROM clients
JOIN commandes ON clients.id = commandes.client_id;

---

SELECT produit, COUNT(*) AS nombre_commandes
FROM commandes
GROUP BY produit;

---

SELECT * FROM utilisateurs ORDER BY nom ASC;