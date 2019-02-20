#include "fenetreprincipal.h"
#include "prof.h"
//#include <QApplication>



int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    FenetrePrincipal w;
    w.show();
	

    return a.exec();*/

	// Test Prof//
	Prof prof;
	prof.setNom("Claudette");
	prof.setVie(80);
	prof.setDefense(10);
	prof.setEtatEffet(1);
	prof.afficher();
	
    return 0;

	//test
}
