Instructions
===========

Le module comprend:

* Un type de contenu Actualité
* Une vue avec deux affichages: une page d'archive, et un bloc de type Content Pane pour afficher les éléments les plus récents


Type de contenu
---------------

Le type de contenu est Actualité.
Il inclut les champs:

* Titre
* Image (Vignette)
* Description
* Date (date de début et date de fin)


Les vues
--------

L'affichage *Archive des actualités*:

* Une page avec la liste de toutes les actualités
* Chaque item est lié avec le contenu original
* Un pager est utilisé pour naviguer entre les actualités 

L'affichage *Actualités les plus récentes*:

* Un content pane qui peut être placé sur une page
* Pour changer le nombre d'elements à afficher sur le content pane, modifier la section "pager" dans la vue "Content Pane - Dernières actualités"

Installation
============
Ce repertoire contient un Feature (qui est chargé comme un module)

Pour ajouter le content pane à une page: 

* Aller vers: admin/structure/pages/edit/NOM-DE-LA-PAGE et cliquer sur Contenu
* Cliquer sur l'icône d'engrenage à gauche dans la region desiré et cliquer sur "Ajouter du contenu"
* Choisir "View panes" et cliquer sur "View: Nouvelles: Content pane - derniers nouvelles"
* Enregistrer et fermer


