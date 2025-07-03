#!/bin/bash

read -p "Entrez le nom du project: " project_name

current_date=$(date +%Y-%m-%d)
user_name=$(whoami)

mkdir -p "$project_name"/{src,includes,lib,docs}

touch "$project_name/src/main.c"
touch "$project_name/includes/${project_name}.h"
touch "$project_name/README.md"

cat << EOF > "$project_name/README.md"
# Nom du Project: $project_name

Créé le: $current_date
Auteur: $username

##Description

Ceci est un project C créé a l'aide d'un script de configuration automatisé.
EOF
