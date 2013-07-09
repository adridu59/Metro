/*
 * Metro 3.1 test
 * Copyright © 2013, Adrien Tétar. All Rights Reserved.
 */
#include <avr/pgmspace.h>
#include <Wire.h>

typedef struct {
  char nom[17]; // wanted number +1 for terminaison
  int cor0[2]; // coord. station elle-même
  int cor1[2]; // correspondance
  int cor2[2];
  int cor3[2];
  int cor4[2];
  int i2c;
  int led;
}Station;

const Station champs PROGMEM = {"Champs Elysees", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11101111};
const Station concorde PROGMEM = {"Concorde", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B10111111};
const Station tuileries PROGMEM = {"Tuileries", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11101111};
const Station proyal PROGMEM = {"Palais Royal", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B10111111};
const Station louvre PROGMEM = {"Louvre Rivoli", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11101111};
const Station chatelet PROGMEM = {"Chatelet", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B10111111};
const Station hdv PROGMEM = {"Hotel de Ville", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11101111};
const Station stpaul PROGMEM = {"St-Paul", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11011111};
const Station bastille PROGMEM = {"Bastille", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111010, B11110111};
const Station ledru PROGMEM = {"Ledru-Rollin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11110111};
const Station faidherbe PROGMEM = {"Faidherbe", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111011};
const Station lazare PROGMEM = {"Saint-Lazare", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11111110};
const Station caumartin PROGMEM = {"Havre Caumartin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11111110};
const Station opera PROGMEM = {"Opera", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11110111};
const Station sept PROGMEM = {"Quatre Septembre", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11111101};
const Station bourse PROGMEM = {"Bourse", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11011111};
const Station sentier PROGMEM = {"Sentier", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11110111};
const Station sebast PROGMEM = {"R. Sebastopol", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11111101};
const Station arts PROGMEM = {"Arts et Metiers", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B01111111};
const Station temple PROGMEM = {"Temple", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B10111111};
const Station republique PROGMEM = {"Republique", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11110111};
const Station stdenis PROGMEM = {"S. Saint-Denis", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11011111};
const Station marcel PROGMEM = {"Etienne Marcel", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11111011};
const Station halles PROGMEM = {"Les Halles", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B10111111};
const Station cite PROGMEM = {"Cite", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B01111111};
const Station stmichel PROGMEM = {"St-Michel", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111100, B11111110};
const Station odeon PROGMEM = {"Odeon", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111101};
const Station stgermain PROGMEM = {"St-Germain", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B10111111};
const Station stsulpice PROGMEM = {"Saint-Sulpice", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111100, B10111111};
const Station stplacide PROGMEM = {"St-Placide", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111100, B01111111};
const Station montparnasse PROGMEM = {"Montparnasse", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111100, B11101111};
const Station vavin PROGMEM = {"Vavin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111010, B01111111};
const Station raspail PROGMEM = {"Raspail", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111100, B11111011};
const Station denfert PROGMEM = {"Denfert", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111110, B11101111};
const Station bonsergent PROGMEM = {"J. Bonsergent", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11111011};
const Station oberkampf PROGMEM = {"Oberkampf", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B01111111};
const Station lenoir PROGMEM = {"Richard Lenoir", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111110};
const Station sabin PROGMEM = {"Breguet Sabin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111101};
const Station rapee PROGMEM = {"Quai de la Rapee", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111010, B11111101};
const Station austerlitz PROGMEM = {"Gare Austerlitz", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11101111};
const Station stmarcel PROGMEM = {"Saint Marcel", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B10111111};
const Station formio PROGMEM = {"Campo Formio", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111100, B11011111};
const Station pasteur PROGMEM = {"Pasteur", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11011111};
const Station quinet PROGMEM = {"Edgar Quinet", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111010, B10111111};
const Station peletier PROGMEM = {"Le Peletier", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11110111};
const Station fayette PROGMEM = {"La Fayette", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11111011};
const Station pyramides PROGMEM = {"Pyramides", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B01111111};
const Station pneuf PROGMEM = {"Pont Neuf", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11011111};
const Station pmarie PROGMEM = {"Pont Marie", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111110, B11111101};
const Station morland PROGMEM = {"Sully Morland", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111110, B11111110};
const Station jussieu PROGMEM = {"Jussieu", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111010, B11111011};
const Station monge PROGMEM = {"Place Monge",  {0, 0},{0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111100, B11110111};
const Station daubenton PROGMEM = {"C. Daubenton", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111110, B11111011};
const Station gobelins PROGMEM = {"Les Gobelins", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111110, B10111111};
const Station invalides PROGMEM = {"Invalides", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11110111};
const Station madeleine PROGMEM = {"Madeleine", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11011111};
const Station drouot PROGMEM = {"Richelieu Drouot", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11111101};
const Station boulevards PROGMEM = {"Gds Boulevards", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11111011};
const Station bnouvelle PROGMEM = {"Bonne Nouvelle", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11111110};
const Station calvaire PROGMEM = {"F. du Calvaire", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11101111};
const Station froissart PROGMEM = {"St-S. Froissart", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B01111111};
const Station vert PROGMEM = {"Chemin Vert", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B01111111};
const Station philippe PROGMEM = {"Saint Philippe", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11110111};
const Station miro PROGMEM = {"Miromesnil", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11111011};
const Station augustin PROGMEM = {"Saint-Augustin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11111101};
const Station duroc PROGMEM = {"Duroc", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11110111};
const Station vanneau PROGMEM = {"Vanneau", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B01111111};
const Station babylone PROGMEM = {"Sevres Babylone", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111011};
const Station mabillon PROGMEM = {"Mabillon", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B01111111};
const Station sorbonne PROGMEM = {"La Sorbonne", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111100, B11111101};
const Station maubert PROGMEM = {"Maubert", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111110, B11011111};
const Station lemoine PROGMEM = {"Cardinal Lemoine", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111110, B01111111};
const Station rambuteau PROGMEM = {"Rambuteau", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11011111};
const Station goncourt PROGMEM = {"Goncourt", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11111101};
const Station belleville PROGMEM = {"Belleville", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11111110};
const Station assemblee PROGMEM = {"Assemblee", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11111011};
const Station solferino PROGMEM = {"Solferino", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11111110};
const Station bac PROGMEM = {"Rue du Bac", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11101111};
const Station rennes PROGMEM = {"Rennes", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111010, B11101111};
const Station ndchamps PROGMEM = {"N-D. Des-Champs", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111010, B11011111};
const Station falguiere PROGMEM = {"Falguiere", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B10111111};
const Station volontaires PROGMEM = {"Volontaires", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11101111};
const Station varenne PROGMEM = {"Varenne", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11111101};
const Station sfx PROGMEM = {"St-Fr. Xavier", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11011111};
const Station gaite PROGMEM = {"Gaite", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111110};
const Station glyon PROGMEM = {"Gare de Lyon", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111110, B11110111};

const Station* plignes[13][15] = {
{&champs, &concorde, &tuileries, &proyal, &louvre, &chatelet, &hdv, &stpaul, &bastille, &ledru, &faidherbe, NULL, NULL, NULL, NULL},
{&lazare, &caumartin, &opera, &sept, &bourse, &sentier, &sebast, &arts, &temple, &republique, NULL, NULL, NULL, NULL, NULL},
{&stdenis, &sebast, &marcel, &halles, &chatelet, &cite, &stmichel, &odeon, &stgermain, &stsulpice, &stplacide, &montparnasse, &vavin, &raspail, &denfert},
{&bonsergent, &republique, &oberkampf, &lenoir, &sabin, &bastille, &rapee, &austerlitz, &stmarcel, &formio, NULL, NULL, NULL, NULL, NULL},
{&pasteur, &montparnasse, &quinet, &raspail, &denfert, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
{&peletier, &fayette, &opera, &pyramides, &proyal, &pneuf, &chatelet, &pmarie, &morland, &jussieu, &monge, &daubenton, &gobelins, NULL, NULL},
{&invalides, &concorde, &madeleine, &opera, &drouot, &boulevards, &bnouvelle, &stdenis, &republique, &calvaire, &froissart, &vert, &bastille, &ledru, &faidherbe},
{&philippe, &miro, &augustin, &caumartin, &fayette, &drouot, &boulevards, &bnouvelle, &stdenis, &republique, &oberkampf, NULL, NULL, NULL, NULL},
{&duroc, &vanneau, &babylone, &mabillon, &odeon, &sorbonne, &maubert, &lemoine, &jussieu, &austerlitz, NULL, NULL, NULL, NULL, NULL},
{&chatelet, &hdv, &rambuteau, &arts, &republique, &goncourt, &belleville, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
{&lazare, &madeleine, &concorde, &assemblee, &solferino, &bac, &babylone, &rennes, &ndchamps, &montparnasse, &falguiere, &pasteur, &volontaires, NULL, NULL},
{&lazare, &miro, &champs, &invalides, &varenne, &sfx, &duroc, &montparnasse, &gaite, NULL, NULL, NULL, NULL, NULL, NULL},
{&lazare, &madeleine, &pyramides, &chatelet, &glyon, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL}
};

void setup() {
  Wire.begin();
};

void loop() {
  for (int i=0; i<14; i++) {
    for (int j=0; j<16; j++) {
      if (plignes[i][j] != NULL) {
        Wire.beginTransmission(plignes[i][j]->i2c); // PCF8574P GGG
        Wire.write(plignes[i][j]->led);
        Wire.endTransmission();
      }
    }
    delay(6000);
    for (int k=0; k<16; k++) { // shut down everything
      if (plignes[i][k] != NULL) {
        Wire.beginTransmission(plignes[i][k]->i2c); // PCF8574P GGG
        Wire.write(B11111111);
        Wire.endTransmission();
      }
    }
  }
}
