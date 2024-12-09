#include "header.h"
using namespace std;

int os = (system("uname -a") == 0) ? 0 : 1;

void sys(int a) {
	switch (a) {
	case 1:
		switch (os) {
		case 0:
			system("clear"); break;
		case 1:
			system("cls"); break;
		}
	}
}
int max(int a, int b, int c) {
	return ((a > b) ? (a > c) ? a : c : (b > c) ? b : c);
}
