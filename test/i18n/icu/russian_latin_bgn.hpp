// ICU
#include <unicode/unistr.h>

extern const UnicodeString RUSSIAN_LATIN_BGN_TRANSLITERATION_RULES (
"::[XxЁА-ФЦ-фц-яё];"
"::NFD(NFC);"
"[аеиоуыэ-яё]ы > y;"
"[ЁАЕИОУЫЭ-Я][Ыы] > Y;"
"А > A;"
"а > a;"
"Б > B;"
"б > b;"
"В > V;"
"в > v;"
"Г > G;"
"г > g;"
"Д > D;"
"д > d;"
"{Е}[[ЁАЕИОУЫЭ-Я][ЙЪЬ]] > YE;"
"{Е}[[аеиоуыэ-яё][йъь]] > Ye;"
"[^[:L:][:M:][:N:]]{Е} > Ye;"
"Е > E;"
"{е}[[ЁАЕИОУЫЭ-Я][аеиоуыэ-яё][ЙЪЬйъь]] > ye;"
"[^[:L:][:M:][:N:]]{е} > ye;"
"е > e;"
"{Ё}[[ЁАЕИОУЫЭ-Я][ЙЪЬ]] > YË;"
"{Ё}[[аеиоуыэ-яё][йъь]] > Yë;"
"[^[:L:][:M:][:N:]]{Ё} > YË;"
"Ё > Ë;"
"{ё}[[ЁАЕИОУЫЭ-Я][аеиоуыэ-яё][ЙЪЬйъь]] > yë;"
"[^[:L:][:M:][:N:]]{ё} > yë;"
"ё > ë;"
"{Ж}[[б-джй-нп-тф-щэ][аеиоуыэ-яё]] > Zh;"
"Ж > ZH;"
"ж > zh;"
"З > Z;"
"з > z;"
"{[[[Б-ДЖЙ-НП-ТФ-ЩЭ][б-джй-нп-тф-щэ]]-[Йй]]}З > ·Е;"
"{[[[Б-ДЖЙ-НП-ТФ-ЩЭ][б-джй-нп-тф-щэ]]-[Йй]]}з > ·е;"
"И > I;"
"и > i;"
"{Й}[АУЫЭауыэ] > Y·;"
"{й}[АУЫЭауыэ] > y·;"
"Й > Y;"
"й > y;"
"К > K;"
"к > k;"
"Л > L;"
"л > l;"
"М > M;"
"м > m;"
"Н > N;"
"н > n;"
"О > O;"
"о > o;"
"П > P;"
"п > p;"
"Р > R;"
"р > r;"
"С > S;"
"с > s;"
"ТС > T·S;"
"Тс > T·s;"
"тс > t·s;"
"Т > T;"
"т > t;"
"У > U;"
"у > u;"
"Ф > F;"
"ф > f;"
"{Х}[[б-джй-нп-тф-щэ][аеиоуыэ-яё]] > Kh;"
"Х > KH;"
"х > kh;"
"{Ц}[[б-джй-нп-тф-щэ][аеиоуыэ-яё]] > Ts;"
"Ц > TS;"
"ц > ts;"
"{Ч}[[б-джй-нп-тф-щэ][аеиоуыэ-яё]] > Ch;"
"Ч > CH;"
"ч > ch;"
"ШЧ > SH·CH;"
"Шч > Sh·ch;"
"шч > sh·ch;"
"{Ш}[[б-джй-нп-тф-щэ][аеиоуыэ-яё]] > Sh;"
"Ш > SH;"
"ш > sh;"
"{Щ}[[б-джй-нп-тф-щэ][аеиоуыэ-яё]] > Shch;"
"Щ > SHCH;"
"щ > shch;"
"Ъ > ʺ;"
"ъ > ʺ;"
"{[[ЁАЕИОУЫЭ-Я][аеиоуыэ-яё]]}Ы > ·Y;"
"{[[ЁАЕИОУЫЭ-Я][аеиоуыэ-яё]]}ы > ·y;"
"{Ы}[АУЫЭауыэ] > Y·;"
"{ы}[ауыэ] > y·;"
"Ы > Y;"
"ы > y;"
"Ь > ʹ;"
"ь > ʹ;"
"Э > E;"
"э > e;"
"{Ю}[[б-джй-нп-тф-щэ][аеиоуыэ-яё]] > Yu;"
"Ю > YU;"
"ю > yu;"
"{Я}[[б-джй-нп-тф-щэ][аеиоуыэ-яё]] > Ya;"
"Я > YA;"
"я > ya;"
);
