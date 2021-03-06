/*
 *  objreader.h
 *  objloader
 *
 *  Created by a1gucis on 10/28/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef _OBJREADER_H_
#define _OBJREADER_H_
#include <vector>
#include <iostream>
#include <fstream>
#include <math.h>
#include "vertex.h"
#include "normal.h"
#include "texel.h"
#include "vect.h"
#include "Polygon3.h"
using namespace std;

class ObjReader {
private: 
	int numOfVertices, numOfTexels, numOfNormals, numOfPolygons;
	vector<Vertex *> *vertices;
	vector<Texel *> *texels;
	vector<Normal *> *normals;
	vector<Polygon3 *> *polygons;
	
	void readVertexData(ifstream *datafile);
	void readTexelData(ifstream *datafile);
	void readNormalData(ifstream *datafile);
	void readPolygonData(ifstream *datafile);
public:
	ObjReader();
	bool readData(char *filename);
	vector<Polygon3 *> *getPolygons();
	int getNumOfPolygons();
	int getNumOfVertices();
	//
	void displayVertexData();
	void displayNormalData();
	void displayTexelData();
	vector<Vertex *> *getVertices();
	vector<Texel *> *getTexels();
	vector<Normal *> *getNormals();
	
	//
};


#endif