#include <stdio.h>
#include <stdlib.h> 
#include "prototypes.h"

struct winner{// ИСПОЛЬЗУЕТСЯ ДЛЯ ВЫВОДА ТАБЛИЦЫ ЛИДЕРОВ НА СТРАНИЦЕ ТАБЛИЦА ЛИДЕРОВ
    char name[20];// ХРАНИТ ИМЕНА ПОБЕДИТЕЛЕЙ ИЗ ФАЙЛА
    unsigned num_moves;// ХРАНИТ КОЛИЧЕСТВО ХОДОВ ЗА КОТОРОЕ ПОБЕДИЛ ПОБЕДИТЕЛЬ
};

int main_menu()
{
	int menu;
	struct winner tablname[15];


	system("clear");// УДАЛЯЕТ В ТЕРМИНАЛЕ ВСЕ НАПИСАННОЕ ВЫШЕ
	printf("\t\t __   __   ______   __        __         ______    \n");
	printf("\t\t/_/| /_/| /_____/| /_/|      /_/|       /______\\   \n");
	printf("\t\t|-|| |-|| |- ___|/ |-||      |-||      /- ___ -\\\\  \n");
	printf("\t\t|-||_|-|| |-||___  |-||      |-||      |-//  \\-||  \n");
	printf("\t\t|-|/_|-|| |-|___/| |-||      |-||      |-||  |-||   \n");
	printf("\t\t|- __ -|| |- ___|/ |-||      |-||      |-||  |-||   \n");
	printf("\t\t|-|| |-|| |-||___  |-||____  |-||____  |-||__|-||   \n");
	printf("\t\t|-|| |-|| |-|___/| |-|____/| |-|____/| |-\\___/-|/ \n");
	printf("\t\t|_|/ |_|/ |_____|/ |______|/ |______|/ \\_______/  \n");
	printf("\n\n\t\t\t\t   GOMOKU\n\n\t\t\t\t   1.Играть\n\t\t\t\t   2.Настройки\n\t\t\t\t   3.Правила игры\n\t\t\t\t   4.Таблица лидеров\n\t\t\t\t   5.Выход\n\t\t\t\t   ");
	printf("\n");
	printf("Выберите нужный вам пункт ");
	for(int i = 0; i < 1; i++){
		scanf("%d", &menu);
		if((menu < 1) || (menu > 5)){// ПРОВЕРКА НА КОРРЕКТНОСТЬ ВВОДА, БУКВЫ НЕ МОЖЕТ ПРОВЕРИТЬ
			printf("Эй, не шали, такого варианта нет!\n");
			--i;
		}	
	}
	return menu;
}