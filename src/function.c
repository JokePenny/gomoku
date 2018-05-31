
#include "prototypes.h"
#include <stdio_ext.h>//-----------------------------------------


static int LEN = 3, GLEN = 4;

int correct_entering(int menu, int settings)
{
	__fpurge(stdin);//------------------------
	int c, error = 0;
	char *ptr;
	if(menu == 0){
		char strChoose[LEN];
		do{
			if(error == 1){
				set_display_atrib(BRIGHT);
				set_display_atrib(F_RED);
				printf("\t\t\t\t   [Ошибка!]\n\t\t\t\t   ");
				resetcolor();
				error = 0;
			}
			for(ptr = strChoose; ptr - strChoose < LEN - 1 && (c = getchar()) != EOF && c != '\n'; ++ptr)
				*ptr = c;

			if(c == '\n')
				*ptr = '\0';

			while(c != '\n'){
				c = getchar();
				continue;
			}
			error++;
		}while((strChoose[0] != '1' && strChoose[0] != '2' && strChoose[0] != '3' && strChoose[0] != '4' && strChoose[0] != '5' && strChoose[0] != '6') || strChoose[1] != '\0');
		if(strChoose[0] == '1')
			return 1;
		else if(strChoose[0] == '2')
			return 2;
		else if(strChoose[0] == '3')
			return 3;
		else if(strChoose[0] == '4')
			return 4;
		else if(strChoose[0] == '5')
			return 5;
		else if(strChoose[0] == '6')
			return 6;
		else
			return 0;
	}else if(menu == 1){
		char strChoose[GLEN];
		do{
			if(error == 1){
				set_display_atrib(BRIGHT);
				set_display_atrib(F_RED);
				printf("[Ошибка! Попробуйте снова]-----> ");
				resetcolor();
				error = 0;
			}
			for(ptr = strChoose; ptr - strChoose < GLEN - 1 && (c = getchar()) != EOF && c != '\n'; ++ptr)
				*ptr = c;

			if(c == '\n')
				*ptr = '\0';

			while(c != '\n'){
				c = getchar();
				continue;
			}
			error++;
		}while((((strChoose[0] != '1' || strChoose[1] != '0') && (strChoose[0] != '1' || strChoose[1] != '1') && (strChoose[0] != '1' || strChoose[1] != '2') && (strChoose[0] != '1' || strChoose[1] != '3') && (strChoose[0] != '1' || strChoose[1] != '4') && (strChoose[0] != '1' || strChoose[1] != '5')) || strChoose[2] != '\0') && (strChoose[0] != '1' || strChoose[1] != '\0') && (strChoose[0] != '2' || strChoose[1] != '\0') && (strChoose[0] != '3' || strChoose[1] != '\0') && strChoose[0] != '4' && (strChoose[0] != '5' || strChoose[1] != '\0') && (strChoose[0] != '6' || strChoose[1] != '\0') && (strChoose[0] != '7' || strChoose[1] != '\0') && (strChoose[0] != '8' || strChoose[1] != '\0') && (strChoose[0] != '9' || strChoose[1] != '\0'));
		switch(strChoose[0]){
			case '1':
				if(strChoose[1] == '\0'){
					return 1;
				}
				switch(strChoose[1]){
					case '0':
						return 10;
					case '1':
						return 11;
					case '2':
						return 12;
					case '3':
						return 13;
					case '4':
						return 14;
					case '5':
						return 15;
				}
			case '2':
				return 2;
			case '3':
				return 3;
			case '4':
				return 4;
			case '5':
				return 5;
			case '6':
				return 6;
			case '7':
				return 7;
			case '8':
				return 8;
			case '9':
				return 9;
		}
	}else if(menu == 2){
		char strChoose[LEN];
		do{
			if(error == 1){
				set_display_atrib(BRIGHT);
				set_display_atrib(F_RED);
				printf("\t\t\t\t   [Ошибка!]\n\t\t\t\t   ");
				resetcolor();
				error = 0;
			}

			set_display_atrib(BLINK);
	    	set_display_atrib(F_YELLOW);
			printf("\nВыберите нужный вам пункт ");
			resetcolor();
			for(ptr = strChoose; ptr - strChoose < LEN - 1 && (c = getchar()) != EOF && c != '\n'; ++ptr)
				*ptr = c;

			if(c == '\n')
				*ptr = '\0';

			while(c != '\n'){
				c = getchar();
				continue;
			}
			error++;
		}while((strChoose[0] != '1' && strChoose[0] != '2' && (strChoose[0] != '3' || settings != 10) && (strChoose[0] != '3' || settings != 0) 
												&&  (strChoose[0] != '4' || settings != 0) && (strChoose[0] != '5' || settings != 0)) || strChoose[1] != '\0');
		if(strChoose[0] == '1')
			return 1;
		else if(strChoose[0] == '2' && settings == 0)
			return 2;
		else if(strChoose[0] == '2' && settings != 0)
			return 0;
		else if(strChoose[0] == '3' && settings == 0)
			return 3;
		else if(strChoose[0] == '3' && settings == 10)
			return 3;
		else if(strChoose[0] == '4')
			return 4;
		else if(strChoose[0] == '5')
			return 5;
		else
			return 0;	
	}else if(menu == 10){
		char strChoose[LEN];
		do{
			if(error == 1){
				set_display_atrib(BRIGHT);
				set_display_atrib(F_RED);
				printf("\t\t\t\t   [Ошибка!]\n\t\t\t\t   ");
				resetcolor();
				error = 0;
			}
			for(ptr = strChoose; ptr - strChoose < LEN - 1 && (c = getchar()) != EOF && c != '\n'; ++ptr)
				*ptr = c;

			if(c == '\n')
				*ptr = '\0';

			while(c != '\n'){
				c = getchar();
				continue;
			}
			error++;
		}while((strChoose[0] != '1' && strChoose[0] != '2') || strChoose[1] != '\0');
		if(strChoose[0] == '1')
			return 1;
		else if(strChoose[0] == '2')
			return 0;	
	}
	return 0;
}

int main_menu()
{
	int menu = 0, settings = 0;
	system("clear");// УДАЛЯЕТ В ТЕРМИНАЛЕ ВСЕ НАПИСАННОЕ ВЫШЕ
	set_display_atrib(BRIGHT);
	set_display_atrib(F_RED);
	printf("\t\t __   __   ______   __        __         ______    \n");
	printf("\t\t/_/| /_/| /_____/| /_/|      /_/|       /______\\   \n");
	printf("\t\t|-|| |-|| |- ___|/ |-||      |-||      /- ___ -\\\\  \n");
	printf("\t\t|-||_|-|| |-||___  |-||      |-||      |-//  \\-||  \n");
	printf("\t\t|-|/_|-|| |-|___/| |-||      |-||      |-||  |-||   \n");
	printf("\t\t|- __ -|| |- ___|/ |-||      |-||      |-||  |-||   \n");
	printf("\t\t|-|| |-|| |-||___  |-||____  |-||____  |-||__|-||   \n");
	printf("\t\t|-|| |-|| |-|___/| |-|____/| |-|____/| |-\\___/-|/ \n");
	printf("\t\t|_|/ |_|/ |_____|/ |______|/ |______|/ \\_______/  \n");
	resetcolor();
	top_table_player(&menu);
	set_display_atrib(BRIGHT);
	set_display_atrib(F_YELLOW);
	printf("\n\n\t\t\t\t   GOMOKU\n\n\t\t\t\t   1.Играть\n\t\t\t\t   2.Настройки\n\t\t\t\t   3.Правила игры\n\t\t\t\t   4.Таблица лидеров\n\t\t\t\t   5.Выход\n\t\t\t\t   ");
	printf("\n");
	printf("Выберите нужный вам пункт ");
	resetcolor();
	menu = correct_entering(menu, settings);

	return menu;
}

void fill_gameboard(char gameboard_mass[TABLE_Y][TABLE_Y])
{
	int i = 0, j = 0;
	/*system("clear");*/// ОЧИЩАЕМ ОБЛАСТЬ ВЫШЕ, В ДАЛЬНЕЙШЕМ, БУДЕТ ВЫГЯДИТЬ ТАК, ЧТО ДОСКА СТАТИЧНА
	for( i = 0; i < TABLE_Y; i++){// ЗАПОЛНЯЕМ МАССИВ (ИГРОВУЮ ДОСКУ), ТО ЕСТЬ ПРИВОДИМ К СМОТРИБЕЛЬНОМУ ВИДУ
		for( j = 0; j < TABLE_Y; j++){
			gameboard_mass[i][j] = '_';
		}
	}
}

void print_gameboard(char gameboard_mass[TABLE_Y][TABLE_Y], int limitMovesO, int limitMovesX)
{
	//system("clear"); 
	printf("limitMovesX - %d\n", limitMovesX);
	printf("limitMovesO - %d\n", limitMovesO);
	set_display_atrib(BRIGHT);
    set_display_atrib(F_RED);
	printf("                       ____   __      _    _      __    _   __ __   __\n");
	printf("  Кол-во оставшихся   (  __) /  \\    / \\  / \\    /  \\  ( )_/ / \\ \\_/ /    Кол-во оставшихся\n");
	printf("       ходов X        ) (   ( () )  / /\\\\//\\ \\  ( () ) )  _ |   \\_  /	       ходов O \n");
	printf("       -[%d]-         (_)    \\__/  (_)  --  (_)  \\__/  (_) \\_\\   /_/	       -[%d]-\n", limitMovesX, limitMovesO);
	resetcolor();
	for(int i = 0; i < TABLE_Y; i++){// ЗДЕСЬ ВЫВОДИТСЯ САМА ДОСКА
		printf("\n\t\t");
		for(int j = 0; j < TABLE_Y; j++){
			if(i == 0){
				if(j == 0){// ВЫВОДЯТСЯ ОРИЕНТИРОВОЧНЫЕ КООРДИНАТЫ ПО БОКАМ ИГРОВОГО ПОЛЯ ПО ГОРИЗОНТАЛИ
					printf("   ");
				}else if(j < 10){
					set_display_atrib(BRIGHT);
    				set_display_atrib(F_CYAN);
					printf("  %d", j);
					resetcolor();
				}else if(j == 9){
					set_display_atrib(BRIGHT);
    				set_display_atrib(F_CYAN);
					printf("  %d", j);
					resetcolor();
				}else{
					set_display_atrib(BRIGHT);
    				set_display_atrib(F_CYAN);
					printf(" %2d", j);
					resetcolor();
				}
			}else if(j == 0){// ТЕ ЖЕ САМЫЕ КООРДИНАТЫ, ТОЛЬКО ПО ВЕРТИКАЛИ
				if(i < 10){
					set_display_atrib(BRIGHT);
    				set_display_atrib(F_CYAN);
					printf(" %2d ", i);
					resetcolor();
				}else{
					set_display_atrib(BRIGHT);
    				set_display_atrib(F_CYAN);
					printf(" %d ", i);
					resetcolor();
					}
			}else{
				if(gameboard_mass[i][j] == 'X'){
					set_display_atrib(BRIGHT);
    				set_display_atrib(F_WHITE);
					printf("[%c]", gameboard_mass[i][j]);// ВЫВОД САМОЙ ИГРОВОЙ ДОСКИ
					resetcolor();
				}else if(gameboard_mass[i][j] == 'O'){
					set_display_atrib(BRIGHT);
    				set_display_atrib(F_WHITE);
					printf("[%c]", gameboard_mass[i][j]);// ВЫВОД САМОЙ ИГРОВОЙ ДОСКИ
					resetcolor();
				}else{
					set_display_atrib(BRIGHT);
    				set_display_atrib(F_CYAN);
					printf("[%c]", gameboard_mass[i][j]);// ВЫВОД САМОЙ ИГРОВОЙ ДОСКИ
					resetcolor();
				}
			}
		}
	}
}

void entering_coord(int choice, int winExit, int *height, int *widht, char tableGame[TABLE_Y][TABLE_Y])
{
	int menu = 1, settings = 0;
	if((choice == 1 || choice == 0) && winExit != 1){
		if(choice == 1){
			set_display_atrib(BRIGHT);
			set_display_atrib(F_GREEN);
			printf("\nХод делает X");
			resetcolor();
		}else{
			set_display_atrib(BRIGHT);
			set_display_atrib(F_GREEN);
			printf("\nХод делает O");
			resetcolor();
		}
		for(int i = 0; i < 1; i++){// ПРОВЕРКА НА ВВОДИМЫЕ СИМВОЛЫ
			if(choice == 1){
				set_display_atrib(BRIGHT);
				set_display_atrib(F_YELLOW);
				printf("\n[Высота] - ");
				resetcolor();
			}else{
				set_display_atrib(BRIGHT);
				set_display_atrib(F_YELLOW);
				printf("\n[Высота] - ");
				resetcolor();
			}
			*height = correct_entering(menu, settings);
			set_display_atrib(BRIGHT);
			set_display_atrib(F_YELLOW);
			printf("[Ширина] - ");
			resetcolor();
			*widht = correct_entering(menu, settings);
			if(tableGame[*height][*widht] == 'X' || tableGame[*height][*widht] == 'O'){// ПРОВЕРКА НА ЗАНЯТОСТЬ КЛЕТКИ
				printf("---!!!Эта клетка уже занята!!!---");
				--i;
			}
		}
	}

	if(choice == 1){
		tableGame[*height][*widht] = 'X';
	}else{
		tableGame[*height][*widht] = 'O';
	}
}

void check_to_win(char tableGame[TABLE_Y][TABLE_Y], int choice, int widht, int height, int winExit, int *winX, int *winO, int *playerScoreGorizont, int *playerScoreVertikal, int *playerScoreLeftDiagonal, int *playerScoreRightDiagonal, int  *playerScoreGorizontLeft, int *playerScoreVertikalLeft, int *playerScoreLeftDiagonalLeft, int *playerScoreRightDiagonalLeft, int *hightStepPlayer, int *weightStepPlayer)
{
	int scoreHand = 0;
	int score = 0, j = 0;
	int left, right, up, down;
	int zamok = 0;
	while(scoreHand != 8){
		if(scoreHand <= 7){
			if(hightStepPlayer[scoreHand] != 0 && weightStepPlayer[scoreHand] != 0){
				height = hightStepPlayer[scoreHand];
				widht = weightStepPlayer[scoreHand];
			}else{
				height = 0;
				widht = 0;
			}
			if(height == 0 || widht == 0)
				scoreHand = 7;
		}
		score = 0, j = 0;
		left = widht - 4;
		right = widht + 4; 
		up = height - 4;
		down = height + 4;
		// ГОРИЗОНТАЛЬНАЯ ПРОВЕРКА, СОСТОИТ В ТОМ
		// ЧТО ПРОВЕРКА ПРОВОДИТСЯ ОТНОСИТЕЛЬНО КООРДИНАТ ВВЕДЕННЫХ ИГРОКОМ
		// В ЛЕВО НА 4 КЛЕТКИ И В ПРАВО НА 4 КЛЕТКИ
		// СРАВНИВАЯ СОДЕРЖИМОЕ МАССИВА
		// ПОШАГОВО ОПИШУ НА СЛЕДУЩЕЙ ПРОВЕРКЕ ПО ГОРИЗОНТАЛИ
		int exit = left - 1;
		int check = 0;
		int spaceFinder = 0;
		for(int i = widht - 1; i >= left; i--){// НАЧИНАЕТСЯ ОТСЧЕТ С ЛЕВОЙ КЛЕТКИ, КОТОРАЯ НАХОДИТСЯ РАДОМ С ТОЙ КЛЕКТОЙ, КОТОРУЮ УКАЗАЛ ЮЗЕР
			control(exit, i, choice, tableGame, height, &score, &spaceFinder, height, height, i - 1, i + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreGorizontLeft[scoreHand] = score + spaceFinder;
		check = 0;
		exit = right + 1;
		for(int i = widht + 1; i <= right; i++){
			control(exit, i, choice, tableGame, height, &score, &spaceFinder, height, height, i - 1, i + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreGorizont[scoreHand] = score + spaceFinder;
		check = 0;
		checkWin(score, choice, &*winX, &*winO);
		score = 0;
		spaceFinder = 0;
		if(zamok >= 2){
			playerScoreGorizontLeft[scoreHand] = 0;
			playerScoreGorizont[scoreHand] = 0;
		}
		zamok = 0;
		// ВЕРТИКАЛЬНАЯ ПРОВЕРКА, СОСТОИТ В ТОМ
		// ЧТО ПРОВЕРКА ПРОВОДИТСЯ ОТНОСИТЕЛЬНО КООРДИНАТ ВВЕДЕННЫХ ИГРОКОМ
		// В ВЕРХ НА 4 КЛЕТКИ И ВНИЗ НА 4 КЛЕТКИ
		// СРАВНИВАЯ СОДЕРЖИМОЕ МАССИВА
		exit = up - 1;
		for(int i = height - 1; i >= up; i--){
			control(exit, widht, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht, widht, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreVertikalLeft[scoreHand] = score + spaceFinder;
		check = 0;
		exit = down + 1;
		for(int i = height + 1; i <= down; i++){
			control(exit, widht, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht, widht, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreVertikal[scoreHand] = score + spaceFinder;
		check = 0;
		checkWin(score, choice, &*winX, &*winO);
		score = 0;
		spaceFinder = 0;
		if(zamok >= 2){
			playerScoreVertikalLeft[scoreHand] = 0;
			playerScoreVertikal[scoreHand] = 0;
		}
		zamok = 0;
		// ЛЕВАЯ ДИАГОНАЛЬНАЯ ПРОВЕРКА (ТО ЕСТЬ ТАКАЯ \ ), СОСТОИТ В ТОМ
		// ЧТО ПРОВЕРКА ПРОВОДИТСЯ ОТНОСИТЕЛЬНО КООРДИНАТ ВВЕДЕННЫХ ИГРОКОМ
		// В ВЕРХ И ВЛЕВО НА 4 КЛЕТКИ И ВНИЗ ВПРАВО НА 4 КЛЕТКИ
		// СРАВНИВАЯ СОДЕРЖИМОЕ МАССИВА
		exit = up - 1;
		j = 0;
		for(int i = height - 1; i >= up; i--){//4 1
			++j;
			control(exit, widht - j, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht - j - 1, widht - j + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreLeftDiagonalLeft[scoreHand] = score + spaceFinder;
		check = 0;
		exit = down + 1;
		j = 0;
		for(int i = height + 1; i <= down; i++){
			++j;
			control(exit, widht + j, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht + j - 1, widht + j + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreLeftDiagonal[scoreHand] = score + spaceFinder;
		check = 0;
		checkWin(score, choice, &*winX, &*winO);
		score = 0;
		spaceFinder = 0;
		if(zamok >= 2){
			playerScoreLeftDiagonalLeft[scoreHand] = 0;
			playerScoreLeftDiagonal[scoreHand] = 0;
		}
		zamok = 0;
		// ПРАВАЯ ДИАГОНАЛЬНАЯ ПРОВЕРКА (ТО ЕСТЬ ТАКАЯ / ), СОСТОИТ В ТОМ
		// ЧТО ПРОВЕРКА ПРОВОДИТСЯ ОТНОСИТЕЛЬНО КООРДИНАТ ВВЕДЕННЫХ ИГРОКОМ
		// В ВЕРХ И !!!ВПРАВО!!! НА 4 КЛЕТКИ И ВНИЗ !!!ВЛЕВО!!! НА 4 КЛЕТКИ
		// СРАВНИВАЯ СОДЕРЖИМОЕ МАССИВА
		exit = up - 1;
		j = 0;
		for(int i = height - 1; i >= up; i--){
			++j;
			control(exit, widht + j, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht + j - 1, widht + j + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreRightDiagonalLeft[scoreHand] = score + spaceFinder;
		check = 0;
		exit = down + 1;
		j = 0;
		for(int i = height + 1; i <= down; i++){// 6 > 9
			++j;
			control(exit, widht - j, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht - j - 1, widht - j + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreRightDiagonal[scoreHand] = score + spaceFinder;
		check = 0;
		checkWin(score, choice, &*winX, &*winO);
		score = 0;
		j = 0;
		spaceFinder = 0;
		if(zamok >= 2){
			playerScoreRightDiagonalLeft[scoreHand] = 0;
			playerScoreRightDiagonal[scoreHand] = 0;
		}
		zamok = 0;
		if(scoreHand != 8)
			scoreHand++;
	}
}

void check_to_win_bot(char tableGame[TABLE_Y][TABLE_Y], int choice, int widht, int height, int winExit, int *winX, int *winO, int *playerScoreGorizont, int *playerScoreVertikal, int *playerScoreLeftDiagonal, int *playerScoreRightDiagonal, int  *playerScoreGorizontLeft, int *playerScoreVertikalLeft, int *playerScoreLeftDiagonalLeft, int *playerScoreRightDiagonalLeft, int *hightStepPlayer, int *weightStepPlayer)
{
	int scoreHand = 0;
	int score = 0, j = 0;
	int left, right, up, down;
	int zamok = 0;
	while(scoreHand != 8){
		if(scoreHand <= 7){
			height = hightStepPlayer[scoreHand];
			widht = weightStepPlayer[scoreHand];
		}
		score = 0, j = 0;
		left = widht - 4;
		right = widht + 4; 
		up = height - 4;
		down = height + 4;
		// ГОРИЗОНТАЛЬНАЯ ПРОВЕРКА, СОСТОИТ В ТОМ
		// ЧТО ПРОВЕРКА ПРОВОДИТСЯ ОТНОСИТЕЛЬНО КООРДИНАТ ВВЕДЕННЫХ ИГРОКОМ
		// В ЛЕВО НА 4 КЛЕТКИ И В ПРАВО НА 4 КЛЕТКИ
		// СРАВНИВАЯ СОДЕРЖИМОЕ МАССИВА
		// ПОШАГОВО ОПИШУ НА СЛЕДУЩЕЙ ПРОВЕРКЕ ПО ГОРИЗОНТАЛИ
		int exit = left - 1;
		int check = 0;
		int spaceFinder = 0;
		for(int i = widht - 1; i >= left; i--){// НАЧИНАЕТСЯ ОТСЧЕТ С ЛЕВОЙ КЛЕТКИ, КОТОРАЯ НАХОДИТСЯ РАДОМ С ТОЙ КЛЕКТОЙ, КОТОРУЮ УКАЗАЛ ЮЗЕР
			control(exit, i, choice, tableGame, height, &score, &spaceFinder, height, height, i - 1, i + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreGorizontLeft[scoreHand] = score;
		check = 0;
		exit = right + 1;
		for(int i = widht + 1; i <= right; i++){
			control(exit, i, choice, tableGame, height, &score, &spaceFinder, height, height, i - 1, i + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreGorizont[scoreHand] = score;
		check = 0;
		checkWin(score, choice, &*winX, &*winO);
		score = 0;
		spaceFinder = 0;
		if(zamok >= 2){
			playerScoreGorizontLeft[scoreHand] = 0;
			playerScoreGorizont[scoreHand] = 0;
		}
		zamok = 0;
		// ВЕРТИКАЛЬНАЯ ПРОВЕРКА, СОСТОИТ В ТОМ
		// ЧТО ПРОВЕРКА ПРОВОДИТСЯ ОТНОСИТЕЛЬНО КООРДИНАТ ВВЕДЕННЫХ ИГРОКОМ
		// В ВЕРХ НА 4 КЛЕТКИ И ВНИЗ НА 4 КЛЕТКИ
		// СРАВНИВАЯ СОДЕРЖИМОЕ МАССИВА
		exit = up - 1;
		for(int i = height - 1; i >= up; i--){
			control(exit, widht, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht, widht, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreVertikalLeft[scoreHand] = score;
		check = 0;
		exit = down + 1;
		for(int i = height + 1; i <= down; i++){
			control(exit, widht, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht, widht, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreVertikal[scoreHand] = score;
		check = 0;
		checkWin(score, choice, &*winX, &*winO);
		score = 0;
		spaceFinder = 0;
		if(zamok >= 2){
			playerScoreVertikalLeft[scoreHand] = 0;
			playerScoreVertikal[scoreHand] = 0;
		}
		zamok = 0;
		// ЛЕВАЯ ДИАГОНАЛЬНАЯ ПРОВЕРКА (ТО ЕСТЬ ТАКАЯ \ ), СОСТОИТ В ТОМ
		// ЧТО ПРОВЕРКА ПРОВОДИТСЯ ОТНОСИТЕЛЬНО КООРДИНАТ ВВЕДЕННЫХ ИГРОКОМ
		// В ВЕРХ И ВЛЕВО НА 4 КЛЕТКИ И ВНИЗ ВПРАВО НА 4 КЛЕТКИ
		// СРАВНИВАЯ СОДЕРЖИМОЕ МАССИВА
		exit = up - 1;
		j = 0;
		for(int i = height - 1; i >= up; i--){//4 1
			++j;
			control(exit, widht - j, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht - j - 1, widht - j + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreLeftDiagonalLeft[scoreHand] = score;
		check = 0;
		exit = down + 1;
		j = 0;
		for(int i = height + 1; i <= down; i++){
			++j;
			control(exit, widht + j, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht + j - 1, widht + j + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreLeftDiagonal[scoreHand] = score;
		check = 0;
		checkWin(score, choice, &*winX, &*winO);
		score = 0;
		spaceFinder = 0;
		if(zamok >= 2){
			playerScoreLeftDiagonalLeft[scoreHand] = 0;
			playerScoreLeftDiagonal[scoreHand] = 0;
		}
		zamok = 0;
		// ПРАВАЯ ДИАГОНАЛЬНАЯ ПРОВЕРКА (ТО ЕСТЬ ТАКАЯ / ), СОСТОИТ В ТОМ
		// ЧТО ПРОВЕРКА ПРОВОДИТСЯ ОТНОСИТЕЛЬНО КООРДИНАТ ВВЕДЕННЫХ ИГРОКОМ
		// В ВЕРХ И !!!ВПРАВО!!! НА 4 КЛЕТКИ И ВНИЗ !!!ВЛЕВО!!! НА 4 КЛЕТКИ
		// СРАВНИВАЯ СОДЕРЖИМОЕ МАССИВА
		exit = up - 1;
		j = 0;
		for(int i = height - 1; i >= up; i--){
			++j;
			control(exit, widht + j, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht + j - 1, widht + j + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreRightDiagonalLeft[scoreHand] = score;
		check = 0;
		exit = down + 1;
		j = 0;
		for(int i = height + 1; i <= down; i++){
			++j;
			control(exit, widht - j, choice, tableGame, i, &score, &spaceFinder, i - 1, i + 1, widht - j - 1, widht - j + 1, &check, i, &zamok);
			if(check != 0)
				i = check;
		}
		playerScoreRightDiagonal[scoreHand] = score;
		check = 0;
		checkWin(score, choice, &*winX, &*winO);
		score = 0;
		j = 0;
		spaceFinder = 0;
		if(zamok >= 2){
			playerScoreRightDiagonalLeft[scoreHand] = 0;
			playerScoreRightDiagonal[scoreHand] = 0;
		}
		zamok = 0;
		scoreHand++;
	}
}

void prioritization(int level, int *playerScoreGorizont, int *playerScoreVertikal, int *playerScoreLeftDiagonal, int *playerScoreRightDiagonal, int  *playerScoreGorizontLeft, int *playerScoreVertikalLeft, int *playerScoreLeftDiagonalLeft, int *playerScoreRightDiagonalLeft, int *playerScore,  int *hightStepPlayer, int *weightStepPlayer, int dopusk, int *outPutReplics){
	int checking = 0;
	int resultat[9] = {'\0'};
	int key;

	for(int i = 0; i < 8; i++){
		resultat[i] = playerScoreGorizont[i] + playerScoreVertikal[i] + playerScoreLeftDiagonal[i] + playerScoreRightDiagonal[i] + playerScoreGorizontLeft[i] + playerScoreVertikalLeft[i] + playerScoreLeftDiagonalLeft[i] + playerScoreRightDiagonalLeft[i];
	}

	for(int i = 0; i < 8; i++){
		if(resultat[i] == 0){
			checking++;
		}
	}
	if(checking == 7){
		for(int i = 0; i < 8; i++){
			resultat[i] = playerScoreGorizontLeft[i] + playerScoreVertikalLeft[i] + playerScoreLeftDiagonalLeft[i] + playerScoreRightDiagonalLeft[i];
		}
	}
	checking = 0;

	/*for(int i = 0; i < 8; i++){
		printf("resultat[%d] - %d\n", i, resultat[i]);
	}*/
	resultat[8] = 0;
	for(int i = 0; i < 8; i++){
		if(resultat[8] <= resultat[i]){
			resultat[8] = resultat[i];
			key = i;
		}
		if(i == 7){
			playerScoreGorizont[8] = playerScoreGorizont[key];
			playerScoreVertikal[8] = playerScoreVertikal[key];
			playerScoreLeftDiagonal[8] = playerScoreLeftDiagonal[key];
			playerScoreRightDiagonal[8] = playerScoreRightDiagonal[key];
			playerScoreGorizontLeft[8] = playerScoreGorizontLeft[key];
			playerScoreVertikalLeft[8] = playerScoreVertikalLeft[key];
			playerScoreLeftDiagonalLeft[8] = playerScoreLeftDiagonalLeft[key];
			playerScoreRightDiagonalLeft[8] = playerScoreRightDiagonalLeft[key];
			if(level != 1 && dopusk != 0){
				hightStepPlayer[8] = hightStepPlayer[key];
				weightStepPlayer[8] = weightStepPlayer[key];
			}
		}
	}
	*playerScore = playerScoreGorizont[8];
	if(*playerScore < playerScoreVertikal[8])
		*playerScore = playerScoreVertikal[8];
	if(*playerScore < playerScoreLeftDiagonal[8])
		*playerScore = playerScoreLeftDiagonal[8];
	if(*playerScore < playerScoreRightDiagonal[8])
		*playerScore = playerScoreRightDiagonal[8];
	if(*playerScore < playerScoreVertikalLeft[8])
		*playerScore = playerScoreVertikalLeft[8];
	if(*playerScore < playerScoreLeftDiagonalLeft[8])
		*playerScore = playerScoreLeftDiagonalLeft[8];
	if(*playerScore < playerScoreRightDiagonalLeft[8])
		*playerScore = playerScoreRightDiagonalLeft[8];
	*outPutReplics = *playerScore;
}

int checkWin(int score, int choice, int *winX, int *winO)// ПРОВЕРКА НА ПОБЕДУ
{
	if(score == 4){
		if(choice == 1){// ЕСЛИ СЧЕТЧИК БУДЕТ РАВЕН 4, ТО ИГРОК ПОБЕДИЛ
			*winX = 1;
		}else{
			*winO = 1;
		}
	}else if(score > 4){
		if(choice == 1){
			*winO = 1;
		}else{
			*winX = 1;
		}
	}
	return 0;
}

void control(int exit, int i, int choice, char tableGame[TABLE_Y][TABLE_Y], int coord, int *score, int *spaceFinder, int hightCoordLeft, int hightCoordRight, int weightCoordLeft, int weightCoordRight, int *check, int checkTwo, int *zamok)
{
	if(i > 0 && checkTwo <= 15){// ДАННАЯ ПРОВЕРКА НУЖНА, ЧТОБЫ i НЕ ВЫШЛА ЗА МАССИВ
		if(choice == 1){
			if(tableGame[coord][i] == 'X'){// ЭТА КЛЕТКА ПРОВЕРЯЕТСЯ НА НАЛИЧИЕ Х (ПРОВЕРКА ИДЕТ НА ПОБЕДУ Х), ЕСЛИ ЕСТЬ, ТО СЧЕТЧИК УВЕЛИЧИВАЕТСЯ
				++*score;
			}else if(tableGame[coord][i] == '_'){
				if(tableGame[hightCoordLeft][weightCoordLeft] == 'X' && tableGame[hightCoordRight][weightCoordRight] == 'X'){
					++*spaceFinder;
				}
				if(*spaceFinder >= 1){
					*spaceFinder = 0;
					*check = exit;
				}
			}else if(tableGame[coord][i] == 'O'){
				++*zamok;
				*check = exit;
			}else if(*score == 3 && tableGame[coord][i] == 'O'){
				++*zamok;
				*score = 0;
				*spaceFinder = 0;
				*check = exit;
			}else if(*spaceFinder >= 1){
				*check = exit;
			}else{// ЕСЛИ В КАКОЙ-ТО ОБЛАСТИ ИЗ 4 КЛЕТОК ЕСТЬ БРЕШЬ, ТО ПРОВЕРКА СБРАСЫВАЕТСЯ
				*check = exit;
			}
		}else{
			if(tableGame[coord][i] == 'O'){// ЭТА КЛЕТКА ПРОВЕРЯЕТСЯ НА НАЛИЧИЕ Х (ПРОВЕРКА ИДЕТ НА ПОБЕДУ Х), ЕСЛИ ЕСТЬ, ТО СЧЕТЧИК УВЕЛИЧИВАЕТСЯ
				++*score;
			}else if(tableGame[coord][i] == '_'){
				if(tableGame[hightCoordLeft][weightCoordLeft] == 'O' && tableGame[hightCoordRight][weightCoordRight] == 'O'){
					++*spaceFinder;
				}
				if(*spaceFinder >= 1){
					*spaceFinder = 0;
					*check = exit;
				}
			}else if(tableGame[coord][i] == 'X'){
				++*zamok;
				*check = exit;
			}else if(*score == 3 && tableGame[coord][i] == 'X'){
				++*zamok;
				*score = 0;
				*spaceFinder = 0;
				*check = exit;
			}else if(*spaceFinder >= 1){
				*check = exit;
			}else{// ЕСЛИ В КАКОЙ-ТО ОБЛАСТИ ИЗ 4 КЛЕТОК ЕСТЬ БРЕШЬ, ТО ПРОВЕРКА СБРАСЫВАЕТСЯ
				*check = exit;
			}
		}
	}
}

void game_settings(int menu, int *settings, int *level, int *choice, int *bot, int *otladka)
{
	int i = 0;

	while(menu == 2){
		system("clear");
		set_display_atrib(BRIGHT);
	    set_display_atrib(F_GREEN);
		printf("\t\t\t\t      _____   _\n");
		printf("\t\t\t\t     /   //  /\\\\\n");
		printf("\t\t\t\t    /   //  /  \\\\\n");				
		printf("\t\t\t\t    \\   \\\\_/   ||\n");
		printf("\t\t\t\t     \\        //\n");
		printf("\t\t\t\t      |    __//\n");
		printf("\t\t\t\t      /   //\n");
		printf("\t\t\t\t     /   //\n");
		printf("\t\t\t\t    /   //\n");
		resetcolor();
		set_display_atrib(BLINK);
	    set_display_atrib(F_YELLOW);
		printf("\n\n\t\t\t\t   НАСТРОЙКИ");
		printf("\n\n\t\t\t\t   1.Бот - ");

		if(*bot == 1){
			printf("включён");
		}else{
			printf("выключен");
		}
		if(*settings == 1){
			printf("\n\t\t\t\t\t|-------- 1.Включить\n\t\t\t\t\t|-------- 2.Выключить");
		}
		printf("\n\t\t\t\t   2.Уровень бота - ");
		if(*level == 1){
			printf("Легкий");
		}else if(*level == 0){
			printf("Средний");
		}
		else {
			printf("Сильный");
		}
		if(*settings == 2){
			printf("\n\t\t\t\t\t|-------- 1.Легкий\n\t\t\t\t\t|-------- 2.Средний\n\t\t\t\t\t|-------- 3.Сильный");
		}
		printf("\n\t\t\t\t   3.Автоматически Вы играете за - ");
		if(*choice == 1){
			printf("X");
		}else{
			printf("O");
		}
		if(*settings == 3){
			printf("\n\t\t\t\t\t|-------- 1.Играть первым за Х\n\t\t\t\t\t|-------- 2.Играть первым за О");
		}
		printf("\n\t\t\t\t   4.Отладочная информация - ");
		if (*otladka == 1) {
			printf("Включена");
		} else {
			printf("Отключена");
		}
		if(*settings == 4){
			printf("\n\t\t\t\t\t|-------- 1.Включена\n\t\t\t\t\t|-------- 2.Отключена");
		}
		printf("\n\t\t\t\t   5.Выход в меню\n");
		resetcolor();

		if(*settings == 0){	
			*settings = correct_entering(menu, *settings);
			i = 0;
		}
		if(*settings == 1 && i == 1){	
			*bot = correct_entering(menu, *settings);
			i = 0;
			*settings = 0;
		}else if(*settings == 2 && i == 1){
			*settings = 10;
			*level = correct_entering(menu, *settings);
			i = 0;
			*settings = 0;
		}else if(*settings == 3 && i == 1){
			*choice = correct_entering(menu, *settings);
			i = 0;
			*settings = 0;
		}else if(*settings == 4 && i == 1){
			*otladka = correct_entering(menu, *settings);
			i = 0;
			*settings = 0;	
		}else if(*settings == 5){
			menu = *settings;
		}
		i = 1;
	}
	i = 0;
}

void rules(int menu, int settings)
{
	while(menu == 3){
		system("clear");
		set_display_atrib(BRIGHT);
	    set_display_atrib(F_RED);
		printf("\t\t\t\t   ________\n");
		printf("\t\t\t\t   |    | |\n");
		printf("\t\t\t\t   |    | |\n");
		printf("\t\t\t\t   |    | |\n");
		printf("\t\t\t\t   \\    / /\n");
		printf("\t\t\t\t    \\__/_/\n");
		printf("\t\t\t\t     ____\n");
		printf("\t\t\t\t    /  \\ \\\n");
		printf("\t\t\t\t    \\__/_/\n");
		resetcolor();
		set_display_atrib(BLINK);
		set_display_atrib(F_YELLOW);
		printf("\n\n\t\t\t\tПРАВИЛА ИГРЫ\n\n\t\t\t\tВ гомоку играют\n\t\t\t\t2 игрока, в поле 15Х15\n\t\t\t\tу каждого из игроков\n\t\t\t\tцель собрать в ряд 5\n\t\t\t\tкрестов или нолей\n\n\t\t\t\t1.Выход в меню\n\t\t\t\t");
		    resetcolor();
		menu = 0;
	        menu = correct_entering(menu, settings);

	}
}
void table_name(int menu, int settings)
{
	struct winner tablname[15];
	while(menu == 4){
		system("clear");
		printf("\t\t\t\t\t\t\t       __\n");
		printf("\t\t\t\t\t\t\t      / /\\\n");
		printf("\t\t\t\t\t\t\t ____/_/  \\___\n");
		printf("\t\t\t\t\t\t\t | |   ___   |\n");
		printf("\t\t\t\t\t\t\t  \\ \\  \\_/  /\n");
		printf("\t\t\t\t\t\t\t   \\_\\_   _/\n");
		printf("\t\t\t\t\t\t\t     \\ \\ /\n");
		printf("\t\t\t\t\t\t\t      || |\n");
		printf("\t\t\t\t\t\t\t     ||___|\n");
		top_table_player(&menu);

		FILE *winTabl1;
		FILE *winTabl2;
		FILE *winTabl3;

		winTabl1 = fopen("data/hall/tabl_easy_bot", "r");
		winTabl2 = fopen("data/hall/tabl_medium_bot", "r");
		winTabl3 = fopen("data/hall/tabl_hard_bot", "r");
		printf("\n\n\t┌───────────ЛЕГКИЙ──────────────┐\t┌──────────СРЕДНИЙ──────────────┐\t┌───────────ТЯЖЕЛЫЙ─────────────┐");
		printf("\n\t│№    Имя\tКоличество ходов│\t│№    Имя\tКоличество ходов│\t│№    Имя\tКоличество ходов│");

		for(int i = 0; i < 10; i++){
			if(fscanf (winTabl1, "%s%u", tablname[i].name, &(tablname[i].num_moves)) != EOF){
				if(i < 9){
					printf("\n\t│%d  - %s\t\t%u\t│", i + 1, tablname[i].name, tablname[i].num_moves);
					if(fscanf (winTabl2, "%s%u", tablname[i].name, &(tablname[i].num_moves)) != EOF){
						printf("\t│%d  - %s\t\t%u\t│", i + 1, tablname[i].name, tablname[i].num_moves);
						if(fscanf (winTabl3, "%s%u", tablname[i].name, &(tablname[i].num_moves)) != EOF){
							printf("\t│%d  - %s\t\t%u\t│", i + 1, tablname[i].name, tablname[i].num_moves);
						}
					}
				}else{
					printf("\n\t│%d - %s\t\t%u\t│", i + 1, tablname[i].name, tablname[i].num_moves);
					if(fscanf (winTabl2, "%s%u", tablname[i].name, &(tablname[i].num_moves)) != EOF){
						printf("\t│%d - %s\t\t%u\t│", i + 1, tablname[i].name, tablname[i].num_moves);
						if(fscanf (winTabl3, "%s%u\t│", tablname[i].name, &(tablname[i].num_moves)) != EOF){
							printf("\t│%d - %s\t\t%u\t│", i + 1, tablname[i].name, tablname[i].num_moves);
						}
					} 
				}
			}
		}
		printf("\n\t└───────────────────────────────┘\t└───────────────────────────────┘\t└───────────────────────────────┘");
		printf("\n      └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘");
		fclose(winTabl1);
		fclose(winTabl2);
		fclose(winTabl3);
		printf("\n\n\t\t\t\t\t\t\t1.Выход в меню\n\t\t\t\t\t\t\t");
		menu = 0;
		menu = correct_entering(menu, settings);
	}
}

void top_table_player(int *menu)
{
    struct top topPlayer[30];
    int playerPoints[33] = {'\0'};
    FILE *winTabl1;
    FILE *winTabl2;
    FILE *winTabl3;

    winTabl1 = fopen("data/hall/tabl_easy_bot", "r");
    winTabl2 = fopen("data/hall/tabl_medium_bot", "r");
    winTabl3 = fopen("data/hall/tabl_hard_bot", "r");

    for(int i = 0; i < 33; i++){
	if(i < 10){
	    if(fscanf (winTabl1, "%s%u", topPlayer[i].name, &(topPlayer[i].num_moves)) != EOF){
		switch(i){
		    case 0:
			playerPoints[i] = 50;
			break;
		    case 1:
			playerPoints[i] = 40;
			break;
		    case 2:
			playerPoints[i] = 30;
			break;
		    case 3:
			playerPoints[i] = 25;
			break;
		    case 4:
			playerPoints[i] = 20;
			break;
		    case 5:
			playerPoints[i] = 15;
			break;
		    case 6:
			playerPoints[i] = 10;
			break;
		    case 7:
			playerPoints[i] = 5;
			break;
		    case 8:
			playerPoints[i] = 5;
			break;
		    case 9:
			playerPoints[i] = 5;
			break;
		}
	    }
	}else if(i < 20){
	    if(fscanf (winTabl2, "%s%u", topPlayer[i].name, &(topPlayer[i].num_moves)) != EOF){
		switch(i){
		    case 10:
			playerPoints[i] = 150;
			break;
		    case 11:
			playerPoints[i] = 125;
			break;
		    case 12:
			playerPoints[i] = 100;
			break;
		    case 13:
			playerPoints[i] = 80;
			break;
		    case 14:
			playerPoints[i] = 60;
			break;
		    case 15:
			playerPoints[i] = 40;
			break;
		    case 16:
			playerPoints[i] = 35;
			break;
		    case 17:
			playerPoints[i] = 30;
			break;
		    case 18:
			playerPoints[i] = 25;
			break;
		    case 19:
			playerPoints[i] = 20;
			break;
		}
	    }
	}else if(i < 30){
	    if(fscanf (winTabl3, "%s%u", topPlayer[i].name, &(topPlayer[i].num_moves)) != EOF){
		switch(i){
		    case 20:
			playerPoints[i] = 250;
			break;
		    case 21:
			playerPoints[i] = 200;
			break;
		    case 22:
			playerPoints[i] = 150;
			break;
		    case 23:
			playerPoints[i] = 125;
			break;
		    case 24:
			playerPoints[i] = 100;
			break;
		    case 25:
			playerPoints[i] = 80;
			break;
		    case 26:
			playerPoints[i] = 70;
			break;
		    case 27:
			playerPoints[i] = 60;
			break;
		    case 28:
			playerPoints[i] = 50;
			break;
		    case 29:
			playerPoints[i] = 40;
			break;
		}
	    }
	}else{
	    i = 33;
	}
    }

    fclose(winTabl1);
    fclose(winTabl2);
    fclose(winTabl3);
    int vizited[30] = {'\0'}; //Хранит посещения
    int indexWinner[30] = {'\0'}; //Хранит индексы
    char Attention[] = {"NONE"};
    for(int i = 0; i < 30; i++){
	for(int j = 1; j < 30; j++){
	    if(topPlayer[i].name != Attention && topPlayer[j].name != Attention && (strcmp(topPlayer[i].name, topPlayer[j].name) == 0) && vizited[j] == 0 && i != j){
		playerPoints[i] = playerPoints[i] + playerPoints[j];
		vizited[j] = 1;
	    }
	}
	vizited[i] = 1; 
    }

    int tmp;
    int tmpIndex;

    for(int i = 0; i < 30; i++){
	indexWinner[i] = i;
    }

    for(int i = 0; i < 30; i++){
	for(int j = 0; j < 30; j++){
	    if(playerPoints[i] < playerPoints[j]){
		tmp = playerPoints[i];
		tmpIndex = indexWinner[i];
		playerPoints[i] = playerPoints[j];
		playerPoints[j] = tmp;
		indexWinner[i] = indexWinner[j];
		indexWinner[j] = tmpIndex;
	    }
	}
    }
    int tyyp = 1;
    for(int i = 0; i < 2; i++){
	for(int j = 1; j < 3; j++){
	    if(strcmp(topPlayer[indexWinner[29 - i]].name, topPlayer[indexWinner[29 - j]].name) == 0 && i != j){
		if(j == 2){
		    strcpy(topPlayer[indexWinner[29 - j]].name, topPlayer[indexWinner[29 - 2 - tyyp]].name);
		    playerPoints[29 - j] = playerPoints[29 - 2 - tyyp];
		    j = 1;
		    tyyp++;
		}else if(j == 1){
		    strcpy(topPlayer[indexWinner[29 - j]].name, topPlayer[indexWinner[29 - j - 1]].name);
		    playerPoints[29 - j] = playerPoints[29 - j - 1];
		    strcpy(topPlayer[indexWinner[29 - j - 1]].name, topPlayer[indexWinner[29 - 2 - tyyp]].name);
		    playerPoints[29 - j - 1] = playerPoints[29 - 2 - tyyp];
		    j = 1;
		    tyyp++;
		}
	    }
	}
    }
    if(*menu == 0){
	printf("\t\t\t\t┌───────ТОП─────────ИГРОКОВ─────┐");
	printf("\n\t\t\t\t│ №    Имя    Количество очков  │");
	for(int i = 0; i < 3; i++){
	    printf("\n\t\t\t\t│ %d  - %s     \t%u\t│", i + 1, topPlayer[indexWinner[29 - i]].name, playerPoints[29 - i]);
	}
	printf("\n\t\t\t\t└─────────────────────────────┐ │");
    }else{
	printf("\n\t\t\t\t\t\t┌───────ТОП─────ИГРОКОВ─────────┐");
	printf("\n\t\t\t\t\t\t│№    Имя\tКоличество очков│");
	for(int i = 0; i < 3; i++){
	    printf("\n\t\t\t\t\t\t│%d  - %s\t\t%u\t│", i + 1, topPlayer[indexWinner[29 - i]].name, playerPoints[29 - i]);
	}
	printf("\n\t\t\t\t\t\t└───────────────────────────────┘");
    }
}

void easter_egg(int menu, int settings)
{
	while(menu == 6){
		system("clear");
                printf("\t\t\t\t    _______\n");
		printf("\t\t\t\t   /  ---  \\\n");
		printf("\t\t\t\t  /         \\\n");
		printf("\t\t\t\t |  !EASTER  |\n");
		printf("\t\t\t\t |    EGG    |\n");
		printf("\t\t\t\t |  -------  |\n");
		printf("\t\t\t\t |    ___    |\n");
		printf("\t\t\t\t  \\         /\n");
		printf("\t\t\t\t   \\_______/\n");
		printf("\n\n\t\t\tПривет!\n\t\t\tЭтого пункта в меню нет!\n\t\t\tПотому что он секретный...\n\t\t\tПоздравляю! Ты нашёл пасхальное яйцо!\n\t\t\tА сейчас, дорогой друг, я хочу тебе рассказать\n\t\t\tпару интересных фактов о твоей любимой игре'Гомоку'.\n\n\t\t\tИгра появилась более четырех тысяч лет назад на территории\n\t\t\tодной из самых древних цивилизаций в долине реки Хуанхэ.\n\t\t\tВ VII веке она была привезена на Японские острова,\n\t\t\tгде получила название «гомоку», что означает «пять камней».\n\n\t\t\tТак как у чёрных камней есть преимущество первого хода и при грамотном\n\t\t\tподходе, не зависимо от того, как будут строить оборону белые камни,\n\t\t\tпобеждают именно чёрные, были введены специальные ограничения,\n\t\t\tчтобы уровнять шансы на победу, и сделать тем самым игру более\n\t\t\tсбалансированной и интересной.\n\n\t\t\tТак, для черных фишек в спортивном рэндзю ввели следующие фолы (запрещенные ходы):\n\n\t\t\t • запрещается строить 'вилки' 3х3 и 4х4\n\n\t\t\t • запрещается строить ряд из 6 или более камней\n\n\t\t\t • запрещается строить любые вилки кратностью более двух.\n\n\t\t\tДля белых камней-фишек никаких фолов нет, и для победы им нужно\n\t\t\tпостроить ряд из пяти камней, либо дождаться ошибки чёрных камней\n\t\t\t(совершение ими фола).\n\n\t\t\tВ том случае, когда наступает ход игрока и он считает, что хороших для\n\t\t\tнего ходов не осталось, он может отказаться делать свой ход, то есть\n\t\t\tсделать пас. Если после этого второй игрок тоже спасует, то игра\n\t\t\tзавершается вничью. Также игра заканчивается вничью, если вся доска\n\t\t\tбудет заставлена камнями, но никто из игроков не смог построить\n\t\t\tпобедную линию в 5 камней.\n\n\t\t\t\tCreated BY:\n\t\t\t • Вашов Алексей\n\t\t\t • Карасев Алексей\n\t\t\t • Рамус Евгений\n\n\n\t\t\t1.Хочу играть!\n\t\t\t");
			
		menu = 0;
	        menu = correct_entering(menu, settings);
	}
}
