Лабораторна робота №10. Бібліотеки

Загальне завдання: на базі попередньо розробленого функціоналу, сформувати статичну бібліотеку, яка повинна включати в себе прототип, реалізацію та модульні тести розроблених методів. Таким чином, в проекті повинні бути 2 модуля:
бібліотека-модуль розробленого функціоналу (module-library)
основний модуль, що використовує розроблену бібліотеки (module-main)
тимчасова директорія lib, кудуи будуть класться бібліотеки та хедер файли;
файли бібліотеки мають бути 100 % doxygen документовані;
за допомогою утиліти nm дослідити перелік функцій, що має бібліотека;
вказання шляху хедер файлу для файла main.c повинно буди через опцію -I компілятора
проект бібліотеки повинен мати модульні тести, але вони не мають бути включені до скомпільованої бібліотеки.
