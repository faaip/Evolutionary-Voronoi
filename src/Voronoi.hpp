//
//  Voronoi.hpp
//  Bachelor
//
//  Created by Frederik Tollund Juutilainen on 13/04/16.
//
//

#ifndef Voronoi_hpp
#define Voronoi_hpp

#include <stdio.h>
#include "Defines.h"
#include "ofMain.h"
#include "ofxVoro.h"
#include "Genome.hpp"

class Voronoi{
public:
    Voronoi();
    void update();
    void draw();
    void setup();
    void createPhenotype(Genome genome);
    void clear();
        
    // Rendering stuff
    ofEasyCam   cam;
    ofLight     light;
    
    vector<ofPoint> cellCentroids;
    vector<float>   cellRadius;
    vector<ofVboMesh>  cellMeshes;
    vector<ofVboMesh>  cellMeshWireframes;
    
    bool isShowingPoints = false;
    bool isShowingMesh = true;
    bool isRendering = true;
    bool widthConstraint = false;
    bool heightConstraint = false;
    bool depthConstraint = true;
    int tessellationType = 0;
};

#endif /* Voronoi_hpp */
