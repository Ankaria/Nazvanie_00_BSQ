//Пишем пока все тут, насколько возможно с пояснениями
//Сначала давай определим порядок действий и способ выполнения задачи
//
//1)Проверяем, если ли файл. Если файла нет, читаем ввод с клавиатуры, создаем файл для решения и вносим данные туда. далее как в 2)
//тут будет шапка
#include <sys/types.h> // для open
#include <unistd.h>// для write/read
#include <stdlib.h>// для exit
#define DLINNA_1i_STROKI 5//в первой строчке файла всегда 5 байтов - 1 цифра, 3 буквы и \n.
#define ISTINNO 1//Истинно = 1
#define LOZNO 0//Ложно = 0


int main(int argc, char *argv)
{
  char *buffer_text;
  
  *buffer_text = 0
  if (argc == 1)
  {
    int fd;
    char c;
    
    c = 0
    fd = open (file, O_CREAT, S_IRWXU, S_IRWXO);
    while (stdin)
    {
      read (c, buffer_text, 1);
      write (fd, &c, 1);
      
    
//2)Если файлы есть (argc > 1), открываем файл и копируем в переменную fd.
//3)fd вставляем в функцию (назовем ее proverka_na_validnost, которая считывает данные файла и проверяет на валидность, а именно:
//*в первой строке есть число и три несовпадающих символа, а в конце \n
//**все строки файла заканчиваются на \n
//***нет никаких символов кроме указанных в первой строке (не считая числа)
//****все строки кроме первой равной длинны.
void  ft_proverka_na_validnost(int fd, )
{
  char *pervaya_stroka;
  
  pervaya_stroka = 0
  
//Если проверка прошла успешно, отправляем fd как аргумент в функцию считывания и перевода символов в массив (назовем ее sozdanie_massiva)
//Если нет, exit (EXIT_FAILURE) (в шапке указываем функцию exit, в atexit вставляем функцию write которая выдает "Map error!")
//
//4)Через sozdanie_massiva считываем файл посимвольно, начиная со второй строки записываем каждый символ в массив BUFER_MASSIV где
//BUFER_MASSIV[kolvo_strok][kolvo_stolb] (количество строк уже известно из первой строки файла, кол-во столбцов мы узнаем из п.3 когда 
//программа перебирает посимвольно чтобы проверить строки на длину)
//
//5)Передаем BUFER_MASSIV в функцию вычисления максимального квадрата (назовем ее Vychislenie_kvadrata). Тут мы создаем массив на [i+1][j+1]
//размера и вписываем в него нужные значения из алгоритма решения, затем вписываем искомый квадрат в BUFER_MASSIV. Передаем его функции,
//которая запишет значения из BUFER_MASSIV в файл (пусть будет Zapis_kvadrata).
//
//6)В Zapis_kvadrata записываем квадрат в файл через open, цикл и write. По завершению, ставим exit (EXIT_SUCCESS)
//
//7)Делаем итерацию в main пока файлы не закончатся.
//
//
//
//
