// Containing.cpp : Defines the entry point for the console application.
//
#include "Afstandberekenaar.h"
#include "Voertuig.h"
#include "Schip.h"
#include "Trein.h"
#include "Container.h"
#include "Vrachtwagen.h"
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
using namespace std;


int main()
{
	Afstandberekenaar ab;
	ab.KortsteRoute("kraan", "boot");
}