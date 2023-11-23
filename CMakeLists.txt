cmake_minimum_required(VERSION 3.5)
project(SimulateurBalises VERSION 0.1.0 LANGUAGES CXX)

# Spécifiez la version de C++ souhaitée
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajoutez ici les autres flags de compilation nécessaires
# par exemple, pour activer les avertissements complets et le débogage:
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g")

# Ajoutez les répertoires qui contiennent les en-têtes (.hpp) avec include_directories()
include_directories(${PROJECT_SOURCE_DIR})

# Création de l'exécutable avec les fichiers sources
add_executable(SimulateurBalises main.cpp EddystoneUID.cpp)

# Définir des sous-répertoires si vous les avez
# Par exemple, si vous avez des bibliothèques dans des sous-dossiers
# add_subdirectory(library)

# Si vous utilisez des bibliothèques externes, trouvez-les avec find_package()
# et liez-les avec target_link_libraries()
# par exemple, pour une bibliothèque fictive 'libbluetooth':
# find_package(libbluetooth REQUIRED)
# target_link_libraries(SimulateurBalises libbluetooth)

# Inclure CTest pour les tests
include(CTest)
enable_testing()

# CPack pour générer des distributions
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
