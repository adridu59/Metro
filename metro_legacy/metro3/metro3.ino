/*
 * Metro 3 - Station finder
 * Copyright © 2013, Adrien Tétar. All Rights Reserved.
 */
typedef struct {
  char nom[17]; // wanted number +1 for terminaison
  byte cor0[2]; // coord. station elle-même
  byte cor1[2]; // correspondance
  byte cor2[2];
  byte cor3[2];
  byte cor4[2];
  byte i2c;
  byte led;
} Station;

Station champs = {"Champs Elysees", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11101111};
Station concorde = {"Concorde", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B10111111};
Station tuileries = {"Tuileries", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11101111};
Station proyal = {"Palais Royal", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B10111111};
Station louvre = {"Louvre Rivoli", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11101111};
Station chatelet = {"Chatelet", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B10111111};
Station hdv = {"Hotel de Ville", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11101111};
Station stpaul = {"St-Paul", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11011111};
Station bastille = {"Bastille", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11110111};
Station ledru = {"Ledru-Rollin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11110111};
Station faidherbe = {"Faidherbe", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111011};
Station lazare = {"Saint-Lazare", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11111110};
Station caumartin = {"Havre Caumartin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11111110};
Station opera = {"Opera", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11110111};
Station sept = {"Quatre Septembre", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11111101};
Station bourse = {"Bourse", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11011111};
Station sentier = {"Sentier", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11110111};
Station sebast = {"R. Sebastopol", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11111101};
Station arts = {"Arts et Metiers", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B01111111};
Station temple = {"Temple", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B10111111};
Station republique = {"Republique", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11110111};
Station stdenis = {"S. Saint-Denis", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11011111};
Station marcel = {"Etienne Marcel", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11111011};
Station halles = {"Les Halles", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B10111111};
Station cite = {"Cite", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B01111111};
Station stmichel = {"St-Michel", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111110};
Station odeon = {"Odeon", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111101};
Station stgermain = {"St-Germain", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B10111111};
Station stsulpice = {"Saint-Sulpice", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B10111111};
Station stplacide = {"St-Placide", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B01111111};
Station montparnasse = {"Montparnasse", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11101111};
Station vavin = {"Vavin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B01111111};
Station raspail = {"Raspail", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111011};
Station denfert = {"Denfert", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11101111};
Station bonsergent = {"J. Bonsergent", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11111011};
Station oberkampf = {"Oberkampf", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B01111111};
Station lenoir = {"Richard Lenoir", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111110};
Station sabin = {"Breguet Sabin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111101};
Station rapee = {"Quai de la Rapee", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111101};
Station austerlitz = {"Gare Austerlitz", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11101111};
Station stmarcel = {"Saint Marcel", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B10111111};
Station formio = {"Campo Formio", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11011111};
Station pasteur = {"Pasteur", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11011111};
Station quinet = {"Edgar Quinet", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B10111111};
Station peletier = {"Le Peletier", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11110111};
Station fayette = {"La Fayette", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11111011};
Station pyramides = {"Pyramides", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B01111111};
Station pneuf = {"Pont Neuf", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11011111};
Station pmarie = {"Pont Marie", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111101};
Station morland = {"Sully Morland", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111110};
Station jussieu = {"Jussieu", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111011};
Station monge = {"Place Monge",  {0, 0},{0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11110111};
Station daubenton = {"C. Daubenton", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111011};
Station gobelins = {"Les Gobelins", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B10111111};
Station invalides = {"Invalides", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11110111};
Station madeleine = {"Madeleine", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11011111};
Station drouot = {"Richelieu Drouot", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100110, B11111101};
Station boulevards = {"Gds Boulevards", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B11111011};
Station bnouvelle = {"Bonne Nouvelle", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11111110};
Station calvaire = {"F. du Calvaire", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11101111};
Station froissart = {"St-S. Froissart", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100010, B01111111};
Station vert = {"Chemin Vert", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B01111111};
Station philippe = {"Saint Philippe", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11110111};
Station miro = {"Miromesnil", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11111011};
Station augustin = {"Saint-Augustin", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100001, B11111101};
Station duroc = {"Duroc", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11110111};
Station vanneau = {"Vanneau", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B01111111};
Station babylone = {"Sevres Babylone", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111011};
Station mabillon = {"Mabillon", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B01111111};
Station sorbonne = {"La Sorbonne", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111101};
Station maubert = {"Maubert", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11011111};
Station lemoine = {"Cardinal Lemoine", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B01111111};
Station rambuteau = {"Rambuteau", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100100, B11011111};
Station goncourt = {"Goncourt", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11111101};
Station belleville = {"Belleville", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100000, B11111110};
Station assemblee = {"Assemblee", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11111011};
Station solferino = {"Solferino", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11111110};
Station bac = {"Rue du Bac", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11101111};
Station rennes = {"Rennes", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11101111};
Station ndchamps = {"N-D. Des-Champs", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11011111};
Station falguiere = {"Falguiere", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B10111111};
Station volontaires = {"Volontaires", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11101111};
Station varenne = {"Varenne", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11111101};
Station sfx = {"St-Fr. Xavier", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0100101, B11011111};
Station gaite = {"Gaite", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11111110};
Station glyon = {"Gare de Lyon", {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, B0111000, B11110111};

Station* plignes[15][15] = {{
},
{
  &champs,
  &concorde,
  &tuileries,
  &proyal,
  &louvre,
  &chatelet,
  &hdv,
  &stpaul,
  &bastille,
  &ledru,
  &faidherbe
},
{
},
{
  &lazare,
  &caumartin,
  &opera,
  &sept,
  &bourse,
  &sentier,
  &sebast,
  &arts,
  &temple,
  &republique
},
{
  &stdenis,
  &sebast,
  &marcel,
  &halles,
  &chatelet,
  &cite,
  &stmichel,
  &odeon,
  &stgermain,
  &stsulpice,
  &stplacide,
  &montparnasse,
  &vavin,
  &raspail,
  &denfert
},
{
  &bonsergent,
  &republique,
  &oberkampf,
  &lenoir,
  &sabin,
  &bastille,
  &rapee,
  &austerlitz,
  &stmarcel,
  &formio
},
{
  &pasteur,
  &montparnasse,
  &quinet,
  &raspail,
  &denfert
},
{
  &peletier,
  &fayette,
  &opera,
  &pyramides,
  &proyal,
  &pneuf,
  &chatelet,
  &pmarie,
  &morland,
  &jussieu,
  &monge,
  &daubenton,
  &gobelins
},
{
  &invalides,
  &concorde,
  &madeleine,
  &opera,
  &drouot,
  &boulevards,
  &bnouvelle,
  &stdenis,
  &republique,
  &calvaire,
  &froissart,
  &vert,
  &bastille,
  &ledru,
  &faidherbe
},
{
  &philippe,
  &miro,
  &augustin,
  &caumartin,
  &fayette,
  &drouot,
  &boulevards,
  &bnouvelle,
  &stdenis,
  &republique,
  &oberkampf
},
{
  &duroc,
  &vanneau,
  &babylone,
  &mabillon,
  &odeon,
  &sorbonne,
  &maubert,
  &lemoine,
  &jussieu,
  &austerlitz
},
{
  &chatelet,
  &hdv,
  &rambuteau,
  &arts,
  &republique,
  &goncourt,
  &belleville
},
{
  &lazare,
  &madeleine,
  &concorde,
  &assemblee,
  &solferino,
  &bac,
  &babylone,
  &rennes,
  &ndchamps,
  &montparnasse,
  &falguiere,
  &pasteur,
  &volontaires
},
{
  &lazare,
  &miro,
  &champs,
  &invalides,
  &varenne,
  &sfx,
  &duroc,
  &montparnasse,
  &gaite
},
{
  &lazare,
  &madeleine,
  &pyramides,
  &chatelet,
  &glyon
}};

void setup() {

};

void loop() {

};
