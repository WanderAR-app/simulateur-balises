#include <iostream>
#include <cstdint>

// Interface de balise
#include "IBalise.hpp"

// Structure de données Eddystone-UID
struct EddystoneUID
{
    uint8_t frameType;
    int8_t txPower;
    uint8_t namespaceID[10];
    uint8_t instanceID[6];
    uint8_t reserved[2];
};

class Eddystone : public IBalise
{
private:
    EddystoneUID eddystoneUID;

public:
    Eddystone();
    ~Eddystone();

    void init() override;
    // Doit configurer correctement la communication Bluetooth
    // en fonction de la plateforme et des bibliothèques Bluetooth qu'on utilisera.

    void diffuse() override;
    // Doit implémenter la logique pour diffuser le paquet Eddystone-UID.
    // Cela comprend la configuration des paramètres de la radio Bluetooth et l'envoi du paquet à intervalles réguliers.
};
