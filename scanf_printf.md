
Funkcja scanf
-------------

### Opis

scanf wczytuje ze strumienia ciąg znaków, formatuje go zgodnie z kodami podanymi w format i przypisuje do zmiennych, których adresy przekazaliśmy w liście.
scanf wczytuje ze standardowego strumienia wejściowego stdin ciąg znaków, formatuje go zgodnie z kodami podanymi w format i przypisuje do zmiennych, których adresy przekazaliśmy w liście.
Funkcje akceptują zmienną ilość parametrów. Pierwszy kod formatujący jest używany dla pierwszego argumentu, drugi dla drugiego, itd.
Jeżeli podamy więcej argumentów niż kodów formatujących, to dodatkowe argumenty są ignorowane.
Jeżeli podamy mniej argumentów niż kodów formatujących, to wynik działania funkcji będzie przypadkowy.
Wczytywanie kolejnego pola kończy się po napotkaniu: znaku Enter, spacji, znaku tabulacji, 1-szego znaku, którego nie można poprawnie zinterpretować lub po wczytaniu podanej w formacie ilości znaków.


### Specyfikacja formatu:

>  % [*] [szerokość] [h|l|L] typ

*Każda specyfikacja musi zaczynać się od znaku % i zawierać co najmniej typ. Pozostałe pola specyfikacji formatu są opcjonalne. Wszystkie pola formatu mają stałą pozycję w łańcuchu formatującym: można je opuścić, ale jeżeli występują, to muszą być podane w kolejności takiej, jak w powyższym zapisie.*

*- Znaki są odczytywane zgodnie z formatem, ale nie są zapamiętywane. Dla takiej specyfikacji nie ma potrzeby podawania zmiennej, w której ma on być umieszczony. Pole używane do odczytania danych z pliku z pominięciem niektórych informacji.

**szerokość** - Maksymalna ilość znaków, która ma być odczytana dla wyliczenia wartości zmiennej.

**h|l|L** - Modyfikacja domyślnych wartości dla pola typ:
* h 	- podajemy dla typów całkowitych (d, i, o, u, x, X), aby zaznaczyć, że parametr jest liczbą typu short int
* l 	- podajemy dla typów całkowitych (d, i, o, u, x, X), aby zaznaczyć, że parametr jest liczbą typu long int
* L 	- podajemy dla typów rzeczywistych (e, E, f, g, G), aby zaznaczyć, że parametr jest liczbą typu long double

**typ** - Typ konwersji argumentu:
    
Liczby:
   * d - całkowita liczba dziesiętna ze znakiem (int *arg)
   * D - całkowita liczba dziesiętna ze znakiem (long *arg)
   * i - całkowita liczba dziesiętna ze znakiem (int *arg)
   * I - całkowita liczba dziesiętna ze znakiem (long *arg)
   * u - całkowita liczba dziesiętna bez znaku (unsigned int *arg)
   * U - całkowita liczba dziesiętna bez znaku (unsigned long *arg)
   * o - całkowita liczba ósemkowa bez znaku (int *arg)
   * O - całkowita liczba dziesiętna ze znakiem (long *arg)
   * x - całkowita liczba szesnastkowa (int *arg)
   * X - całkowita liczba szesnastkowa (int *arg)
   * f - liczba rzeczywista ze znakiem (float *arg)
   * e - liczba rzeczywista ze znakiem (float *arg)
   * E - liczba rzeczywista ze znakiem (float *arg)
   * g - liczba rzeczywista ze znakiem (float *arg)
   * G - liczba rzeczywista ze znakiem (float *arg)

Znaki:
   * c - pojedynczy znak (char *arg)
   * s - wskaźnik do tablicy znaków (char arg[])
   * % - bez konwersji: znak %

Funkcja printf
--------------

### Opis

printf wysyła sformatowany ciąg znaków i wartości zmiennych do podanego strumienia.
printf wysyła sformatowany ciąg znaków i wartości zmiennych do standardowego strumienia wyjściowego (stdout).
Funkcje akceptują zmienną ilość parametrów. Wartość każdego argumentu jest formatowana zgodnie z kodem podanym w formacie, a następnie wyświetlana lub zapisywana do pliku. Pierwszy kod formatujący jest używany dla pierwszego argumentu, drugi dla drugiego, itd.
Jeżeli podamy więcej argumentów niż kodów formatujących, to dodatkowe argumenty są ignorowane.
Jeżeli podamy mniej argumentów niż kodów formatujących, to wynik działania funkcji będzie przypadkowy.


### Specyfikacja formatu:

>  %[znacznik][szerokość][.precyzja][h|l|L]typ

*Każda specyfikacja musi zaczynać się od znaku % i zawierać co najmniej typ. Pozostałe pola specyfikacji formatu są opcjonalne. Wszystkie pola formatu mają stałą pozycję w łańcuchu formatującym: można je opuścić, ale jeżeli występują, to muszą byc podane w kolejności takiej, jak w powyższym zapisie.*

**znacznik** - Jeden lub więcej znaków określających wyrównanie, zapis znaku liczby i kropki dziesiętnej:

* "-"   Wyrównanie wyniku do lewej strony z uzupełnieniem z prawej spacjami. Domyślnie wynik jest wyrównywany do prawej i uzupełniany z lewej spacjami lub zerami.
* "+"   Liczba zawsze poprzedzana znakiem + lub -. Domyślnie: znak + jest pomijany.
* "spacja"   Liczby dodatnie poprzedzane są spacją. Domyślnie: nie ma żadnych odstępów.
* "#"
 dla typów o, x, X - drukowany jest odpowiednio przedrostek O, Ox, OX;
 dla typów e, E, f - wymusza drukowanie kropki dziesiętnej;
 dla typów g i G - drukuje kropkę dziesiętną i wszystkie nieznaczące zera.

**szerokość** - Minimalna liczba znaków użytych do zapisu. Liczby krótsze uzupełniane są do podanej szerokości spacjami z lewej strony. Jeżeli szerokość podamy w formie 0n, to uzupełnia z lewej strony zerami. Jeżeli liczba jest dłuższa od pola szerokość, to będzie miała przydzielona niezbędną ilość znaków, aby wyświetliła się cała, niezależnie od wartości pola szerokość

**.precyzja** - Maksymalna ilość znaków lub miejsc po kropce dziesiętnej do zapisu. Dla liczb całkowitych - minimalna ilość użytych cyfr.
* typy: d, i, o, u, x, X - wartości krótsze dopełniane są z lewej strony zerami, dłuższe - zawsze wyświetlane w całości;
* typy: e, E, f - ilość miejsc po kropce dziesiętnej;
* typy: g, G - maksymalna liczba cyfr znaczących;
* typ c - bez znaczenia;
* typ s - maksymalna ilość wyświetlanych znaków (reszta jest obcinana).

**h|l|L** - Modyfikacja domyślnych wartości dla pola typ:
* h - podajemy dla typów całkowitych (d, i, o, u, x, X), aby zaznaczyć, że parametr jest liczbą typu short int
* l - podajemy dla typów całkowitych (d, i, o, u, x, X), aby zaznaczyć, że parametr jest liczbą typu long int
* L - podajemy dla typów rzeczywistych (e, E, f, g, G), aby zaznaczyć, że parametr jest liczbą typu long double

**typ** - Typ konwersji argumentu:

Liczby:
   * d - całkowita liczba dziesiętna ze znakiem
   * i - całkowita liczba dziesiętna ze znakiem
   * u - całkowita liczba dziesiętna bez znaku
   * o - całkowita liczba ósemkowa bez znaku
   * x - całkowita liczba szesnastkowa bez znaku (z cyframi: a, b, c, d, e, f)
   * X - całkowita liczba szesnastkowa bez znaku (z cyframi: A, B, C, D, E, F)
   * f - liczba rzeczywista ze znakiem w formacie [-]dddd.dddd
   * e - liczba rzeczywista ze znakiem w formacie [-]d.dddd e [+/-]ddd
   * E - to samo co e, ale jako znak wykładnika występuje litera E
   * g - liczba rzeczywista ze znakiem w formacie e lub f: wybierany jest format pozwalający na bardziej zwięzłe wyprowadzenie wyniku
   * G - to samo co g, ale jako znak wykładnika występuje litera E
    
Znaki:
   * c - pojedyńczy znak
   * s - łańcuch znaków zakończony znakiem NULL
   * % - znak %






