#pragma once

#include <memory>
#include <string_view>
#include <unordered_map>

namespace XRechnungUtils {
    using CountryCodeMap = std::unordered_map<std::u8string_view, std::u8string_view>;
    inline const std::unique_ptr<CountryCodeMap> CountryCodes = std::make_unique<CountryCodeMap>(CountryCodeMap{
            {u8"Andorra", u8"AD"},
            {u8"Vereinigte Arabische Emirate", u8"AE"},
            {u8"Afghanistan", u8"AF"},
            {u8"Antigua und Barbuda", u8"AG"},
            {u8"Anguilla", u8"AI"},
            {u8"Albanien", u8"AL"},
            {u8"Armenien", u8"AM"},
            {u8"Angola", u8"AO"},
            {u8"Antarktis", u8"AQ"},
            {u8"Argentinien", u8"AR"},
            {u8"Amerikanisch-Samoa", u8"AS"},
            {u8"Österreich", u8"AT"},
            {u8"Australien", u8"AU"},
            {u8"Aruba", u8"AW"},
            {u8"Ölandinseln", u8"AX"},
            {u8"Aserbaidschan", u8"AZ"},
            {u8"Bosnien und Herzegowina", u8"BA"},
            {u8"Barbados", u8"BB"},
            {u8"Bangladesch", u8"BD"},
            {u8"Belgien", u8"BE"},
            {u8"Burkina Faso", u8"BF"},
            {u8"Bulgarien", u8"BG"},
            {u8"Bahrain", u8"BH"},
            {u8"Burundi", u8"BI"},
            {u8"Benin", u8"BJ"},
            {u8"St. Bartholemy", u8"BL"},
            {u8"Bermuda", u8"BM"},
            {u8"Brunei Darussalam", u8"BN"},
            {u8"Plurinationaler Staat Bolivien", u8"BO"},
            {u8"Bonaire, St. Eustatius und Saba", u8"BQ"},
            {u8"Brasilien", u8"BR"},
            {u8"Bahamas", u8"BS"},
            {u8"Bhutan", u8"BT"},
            {u8"Bouvetinsel", u8"BV"},
            {u8"Botsuana", u8"BW"},
            {u8"Belarus", u8"BY"},
            {u8"Belize", u8"BZ"},
            {u8"Kanada", u8"CA"},
            {u8"Kokosinseln (Keeling)", u8"CC"},
            {u8"Demokratische Republik Kongo", u8"CD"},
            {u8"Zentralafrikanische Republik", u8"CF"},
            {u8"Kongo", u8"CG"},
            {u8"Schweiz", u8"CH"},
            {u8"Cote d Ivoire", u8"CI"},
            {u8"Cookinseln", u8"CK"},
            {u8"Chile", u8"CL"},
            {u8"Kamerun", u8"CM"},
            {u8"China", u8"CN"},
            {u8"Kolumbien", u8"CO"},
            {u8"Costa Rica", u8"CR"},
            {u8"Kuba", u8"CU"},
            {u8"Cabo Verde", u8"CV"},
            {u8"Curacao", u8"CW"},
            {u8"Weihnachtsinsel", u8"CX"},
            {u8"Zypern", u8"CY"},
            {u8"Tschechien", u8"CZ"},
            {u8"Deutschland", u8"DE"},
            {u8"Dschibuti", u8"DJ"},
            {u8"Denemark", u8"DK"},
            {u8"Dominica", u8"DM"},
            {u8"Dominikanische Republik", u8"DO"},
            {u8"Algerien", u8"DZ"},
            {u8"Ecuador", u8"EC"},
            {u8"Estland", u8"EE"},
            {u8"Ägypten", u8"EG"},
            {u8"Westsahara", u8"EH"},
            {u8"Eritrea", u8"ER"},
            {u8"Spanien", u8"ES"},
            {u8"Äthiopien", u8"ET"},
            {u8"Finnland", u8"FI"},
            {u8"Fidschi", u8"FJ"},
            {u8"Falklandinseln (Malwinen)", u8"FK"},
            {u8"Föderierte Staaten von Mikronesien", u8"FM"},
            {u8"Färöer", u8"FO"},
            {u8"Frankreich", u8"FR"},
            {u8"Gabun", u8"GA"},
            {u8"Vereinigtes Königreich", u8"GB"},
            {u8"Grenada", u8"GD"},
            {u8"Georgien", u8"GE"},
            {u8"Französisch-Guayana", u8"GF"},
            {u8"Guernsey", u8"GG"},
            {u8"Ghana", u8"GH"},
            {u8"Gibraltar", u8"GI"},
            {u8"Grönland", u8"GL"},
            {u8"Gambia", u8"GM"},
            {u8"Guinea", u8"GN"},
            {u8"Guadeloupe", u8"GP"},
            {u8"Äquatorialguinea", u8"GQ"},
            {u8"Griechenland", u8"GR"},
            {u8"Südgeorgien und die Südlichen Sandwichinseln", u8"GS"},
            {u8"Guatemala", u8"GT"},
            {u8"Guam", u8"GU"},
            {u8"Guinea-Bissau", u8"GW"},
            {u8"Guyana", u8"GY"},
            {u8"Hongkong", u8"HK"},
            {u8"Heard und die McDonaldinseln", u8"HM"},
            {u8"Honduras", u8"HN"},
            {u8"Kroatien", u8"HR"},
            {u8"Haiti", u8"HT"},
            {u8"Ungarn", u8"HU"},
            {u8"Indonesien", u8"ID"},
            {u8"Irland", u8"IE"},
            {u8"Israel", u8"IL"},
            {u8"Insel Man", u8"IM"},
            {u8"Indien", u8"IN"},
            {u8"Britisches Territorium im Indischen Ozean", u8"IO"},
            {u8"Irak", u8"IQ"},
            {u8"Islamische Republik Iran", u8"IR"},
            {u8"Island", u8"IS"},
            {u8"Italien", u8"IT"},
            {u8"Jersey", u8"JE"},
            {u8"Jamaika", u8"JM"},
            {u8"Jordanien", u8"JO"},
            {u8"Japan", u8"JP"},
            {u8"Kenia", u8"KE"},
            {u8"Kirgisistan", u8"KG"},
            {u8"Kambodscha", u8"KH"},
            {u8"Kiribati", u8"KI"},
            {u8"Komoren", u8"KM"},
            {u8"St. Kitts und Nevis", u8"KN"},
            {u8"Demokratische Volksrepublik Korea", u8"KP"},
            {u8"Republik Korea", u8"KR"},
            {u8"Kuwait", u8"KW"},
            {u8"Kaimaninseln", u8"KY"},
            {u8"Kasachstan", u8"KZ"},
            {u8"Demokratische Volksrepublik Laos", u8"LA"},
            {u8"Libanon", u8"LB"},
            {u8"St. Lucia", u8"LC"},
            {u8"Liechtenstein", u8"LI"},
            {u8"Sri Lanka", u8"LK"},
            {u8"Liberia", u8"LR"},
            {u8"Lesotho", u8"LS"},
            {u8"Litauen", u8"LT"},
            {u8"Luxemburg", u8"LU"},
            {u8"Lettland", u8"LV"},
            {u8"Libyen", u8"LY"},
            {u8"Marokko", u8"MA"},
            {u8"Monaco", u8"MC"},
            {u8"Republik Moldau", u8"MD"},
            {u8"Montenegro", u8"ME"},
            {u8"St. Martin (franz�sischer Teil)", u8"MF"},
            {u8"Madagaskar", u8"MG"},
            {u8"Marshallinseln", u8"MH"},
            {u8"Nordmazedonien", u8"MK"},
            {u8"Mali", u8"ML"},
            {u8"Myanmar", u8"MM"},
            {u8"Mongolei", u8"MN"},
            {u8"Macau", u8"MO"},
            {u8"Marianen, N�rdliche", u8"MP"},
            {u8"Martinique", u8"MQ"},
            {u8"Mauretanien", u8"MR"},
            {u8"Montserrat", u8"MS"},
            {u8"Malta", u8"MT"},
            {u8"Mauritius", u8"MU"},
            {u8"Malediven", u8"MV"},
            {u8"Malawi", u8"MW"},
            {u8"Mexiko", u8"MX"},
            {u8"Malaysia", u8"MY"},
            {u8"Mosambik", u8"MZ"},
            {u8"Namibia", u8"nan"},
            {u8"Neukaledonien", u8"NC"},
            {u8"Niger", u8"NE"},
            {u8"Norfolkinsel", u8"NF"},
            {u8"Nigeria", u8"NG"},
            {u8"Nicaragua", u8"NI"},
            {u8"Niederlande", u8"NL"},
            {u8"Norwegen", u8"NO"},
            {u8"Nepal", u8"NP"},
            {u8"Nauru", u8"NR"},
            {u8"Niue", u8"NU"},
            {u8"Neuseeland", u8"NZ"},
            {u8"Oman", u8"OM"},
            {u8"Panama", u8"PA"},
            {u8"Peru", u8"PE"},
            {u8"Französisch-Polynesien", u8"PF"},
            {u8"Papua-Neuguinea", u8"PG"},
            {u8"Philippinen", u8"PH"},
            {u8"Pakistan", u8"PK"},
            {u8"Polen", u8"PL"},
            {u8"St. Pierre und Miquelon", u8"PM"},
            {u8"Pitcairninseln", u8"PN"},
            {u8"Puerto Rico", u8"PR"},
            {u8"Palästinensische Gebiete", u8"PS"},
            {u8"Portugal", u8"PT"},
            {u8"Palau", u8"PW"},
            {u8"Paraguay", u8"PY"},
            {u8"Katar", u8"QA"},
            {u8"Unbekannt", u8"QU"},
            {u8"Reunion", u8"RE"},
            {u8"Rumänien", u8"RO"},
            {u8"Serbien", u8"RS"},
            {u8"Russische F�deration", u8"RU"},
            {u8"Ruanda", u8"RW"},
            {u8"Saudi-Arabien", u8"SA"},
            {u8"Salomonen", u8"SB"},
            {u8"Seychellen", u8"SC"},
            {u8"Sudan", u8"SD"},
            {u8"Schweden", u8"SE"},
            {u8"Singapur", u8"SG"},
            {u8"St. Helena, Ascension und Tristan da Cunha", u8"SH"},
            {u8"Slowenien", u8"SI"},
            {u8"albard und Jan Mayen", u8"SJ"},
            {u8"Slowakei", u8"SK"},
            {u8"Sierra Leone", u8"SL"},
            {u8"San Marino", u8"SM"},
            {u8"Senegal", u8"SN"},
            {u8"Somalia", u8"SO"},
            {u8"Suriname", u8"SR"},
            {u8"Südsudan", u8"SS"},
            {u8"Sao Toma und Principe", u8"ST"},
            {u8"El Salvador", u8""},
            {u8"St. Martin (Niederl�ndischer Teil)", u8"SX"},
            {u8"Arabische Republik Syrien", u8"SY"},
            {u8"Eswatini", u8"SZ"},
            {u8"Turks- und Caicosinseln", u8"TC"},
            {u8"Tschad", u8"TD"},
            {u8"Französische Süd- und Antarktisgebiete", u8"TF"},
            {u8"Togo", u8"TG"},
            {u8"Thailand", u8"TH"},
            {u8"Tadschikistan", u8"TJ"},
            {u8"Tokelau", u8"TK"},
            {u8"Timor-Leste", u8"TL"},
            {u8"Turkmenistan", u8"TM"},
            {u8"Tunesien", u8"TN"},
            {u8"Tonga", u8"TO"},
            {u8"Türkei", u8"TR"},
            {u8"Trinidad und Tobago", u8"TT"},
            {u8"Tuvalu", u8"TV"},
            {u8"Taiwan", u8"TW"},
            {u8"Vereinigte Republik Tansania", u8"TZ"},
            {u8"Ukraine", u8"UA"},
            {u8"Uganda", u8"UG"},
            {u8"Amerikanische �berseeinseln, Kleinere", u8"UM"},
            {u8"Vereinigte Staaten", u8"US"},
            {u8"Uruguay", u8"UY"},
            {u8"Usbekistan", u8"UZ"},
            {u8"Vatikanstadt", u8"VA"},
            {u8"St. Vincent und die Grenadinen", u8"VC"},
            {u8"Bolivarische Republik Venezuela", u8"VE"},
            {u8"Britische Jungferninseln", u8"VG"},
            {u8"Amerikanische Jungferninseln", u8"VI"},
            {u8"Vietnam", u8"VN"},
            {u8"Vanuatu", u8"VU"},
            {u8"Wallis und Futuna", u8"WF"},
            {u8"Samoa", u8"WS"},
            {u8"Kosovo", u8"XK"},
            {u8"Jemen", u8"YE"},
            {u8"Mayotte", u8"YT"},
            {u8"Südafrika", u8"ZA"},
            {u8"Sambia", u8"ZM"},
            {u8"Simbabwe", u8"ZW"}});
}// namespace XRechnungUtils