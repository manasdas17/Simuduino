# Questions :
# Comment donner une variable au makefile (ex : make toto.ino) ?

# Fichier à compiler
SKETCH = test

# Dossier sketchbook
SKETCHBOOK_PATH = ~/sketchbook/

# Dossier du sketch
SKETCH_PATH = $(SKETCHBOOK_PATH)$(SKETCH)/

# Dossier des librairies de l'utilisateur
HOME_LIB_PATH = $(SKETCHBOOK_PATH)libraries/

# Dossier temporaire pour la compilation
TMP_PATH = /tmp/

# Dossier de Simuduino
SIMUDUINO_PATH = /usr/share/arduino/Simuduino/

# Header de Simuduino
HEADER = $(SIMUDUINO_PATH)Simuduino.h

# Fichiers sources
SRC_LIBS = $(SIMUDUINO_PATH)Simuduino.cpp

# Nom de la librairie utilisée
# !!!!!!!!!!! À automatiser !!!!!!!!
LIBRARY = Led

# Nom du fichier .ino
SKETCH_FILE = $(SKETCH_PATH)$(SKETCH).ino

# Fichier temporaire
TMP_FILE = $(TMP_PATH)$(SKETCH).cpp

# Fichier .cpp de la librairie utilisateur
HOME_LIB = $(HOME_LIB_PATH)$(LIBRARY)/simu/$(LIBRARY)_simu.cpp

# Fichier .c de la librairie Simuduino
SIMU_LIB = $(SIMUDUINO_PATH)utils.c

# Nom de l'executable
EXEC = $(SKETCH)_simu

# === Commandes pour la compilation ===

# Édition de lien
LDFLAGS = -o $(SKETCH_PATH)$(EXEC)

# Indication de l'emplacement de la librairie utilisateur
INCLUDE_HOME = -I $(HOME_LIB_PATH)$(LIBRARY)/

# Indication de l'emplacement de la librairie Simuduino
INCLUDE_SIMU = -I $(SIMUDUINO_PATH)

# Commandes de compilation
CC = gcc
CXX = g++

# Options de compilation
CFLAGS = -Wall -Werror
CXXFLAGS = -Wall -Werror

# Coloration
_R = '\033[31m'# Rouge
_G = '\033[32m'# Vert
_B = '\033[34m'# Bleu

_BO = '\033[1m'# Gras
_NBO = '\033[21m'# Non gras

_D ='\033[0m'# Par défault

# ===DEBUT DES COMMANDES===

all: infos prep build

infos:
	@clear
	@echo $(_B)"****************************************************"
	@echo "*                 "$(_BO)"Simuduino"$(_NBO)"                        *"
	@echo "* Le simulateur de projets robotiques pour Arduino *"
	@echo "****************************************************"$(_D)
	
	@echo "\n"$(_G)"=== Paramètres ==="$(_D)"\n"
	@echo Dossier sketchbook : $(SKETCHBOOK_PATH)
	@echo Dossier librairies utilisateur : $(HOME_LIB_PATH)
	@echo Dossier de Simuduino : $(SIMUDUINO_PATH)
	@echo Dossier temporaire pour la compilation : $(TMP_PATH)
	@echo ""
	@echo Fichier cible : $(SKETCH_PATH)$(SKETCH_FILE)
	@echo Librairie appelée : $(LIBRARY)

prep:
	@echo "\n"$(_G)"=== Création d'un fichier .cpp temporaire ==="$(_D)"\n"
	echo '#include "$(HEADER)"' > $(TMP_FILE)
	cat $(SKETCH_FILE) >> $(TMP_FILE)
	echo >> $(TMP_FILE)
	echo "int main(void) { setup(); while (1) loop(); return 0;}" >> $(TMP_FILE)

build:
	@echo "\n"$(_G)"=== Compilation ==="$(_D)"\n"
	$(CXX) $(CXXFLAGS) $(TMP_FILE) $(HOME_LIB) $(SIMU_LIB) $(INCLUDE_HOME) $(INCLUDE_SIMU) $(SRC_LIBS) $(LDFLAGS)

lauch:
	@echo "\n"$(_D)"=== Lancement de la simulation ==="$(_D)"\n"
	@$(SKETCH_PATH)$(EXEC)

