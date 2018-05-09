#include "BDT.h"
#include "parameters.h"
#include <iostream>

int main(){

	BDT::BDT<2, 15, 8, input_arr_t, score_t, threshold_t> bdt;

	bdt.trees[0] = {{2, 2, 3, -2, -2, 1, -2, -2, 1, 2, -2, -2, 3, -2, -2},
			{23.44139862,  11.824199676513672, 0.5, -2.0, -2.0, 1.4481849670410156, -2.0, -2.0, 1.160520076751709, 66.10154724121094, -2.0, -2.0, 0.5, -2.0, -2.0},
			{2.6207707758594277e-15, 0.1365256894460304, 0.16402818290828577, 1.2227455449746085, 0.7378096010736387, -0.0483438522135738, 1.0402677766761157, -1.8288521916244178, -0.5434167548988549, -0.18823180963055838, 0.36116594077887176, -2.657169427447734, -0.6867798397734569, -2.5527652622298365, -4.231537840365665},
			{1, 2, 3, -1, -1, 6, -1, -1, 9, 10, -1, -1, 13, -1, -1},
			{8, 5, 4, -1, -1, 7, -1, -1, 12, 11, -1, -1, 14, -1, -1},
			{-1, 0, 1, 2, 2, 1, 5, 5, 0, 8, 9, 9, 8, 12, 12}
			};
	bdt.trees[1] = {{2, 2, 3, -2, -2, 1, -2, -2, 1, 2, -2, -2, 3, -2, -2},
			{23.44139862,  11.824199676513672, 0.5, -2.0, -2.0, 1.4481849670410156, -2.0, -2.0, 1.160520076751709, 66.10154724121094, -2.0, -2.0, 0.5, -2.0, -2.0},
			{2.6207707758594277e-15, 0.1365256894460304, 0.16402818290828577, 1.2227455449746085, 0.7378096010736387, -0.0483438522135738, 1.0402677766761157, -1.8288521916244178, -0.5434167548988549, -0.18823180963055838, 0.36116594077887176, -2.657169427447734, -0.6867798397734569, -2.5527652622298365, -4.231537840365665},
			{1, 2, 3, -1, -1, 6, -1, -1, 9, 10, -1, -1, 13, -1, -1},
			{8, 5, 4, -1, -1, 7, -1, -1, 12, 11, -1, -1, 14, -1, -1},
			{-1, 0, 1, 2, 2, 1, 5, 5, 0, 8, 9, 9, 8, 12, 12}
			};

	// Some test data
	input_arr_t x[6] = {{0.7, 1.2, 15.0, 1.0}, // score: 1.04
					   {0.7, 1.5, 15.0, 1.0}, // score: -1.829
					   {0.3, 1.0, 30., 0.0 }, // score: 0.361
					   {0.3, 1.0, 100., 0.0 }, // score: -2.657
					   {0.3, 2.0, 100., 0.0 }, // score: -2.553
					   {0.3, 2.0, 100., 1.0 }}; // score: -4.232

	score_t y;
	for(int i = 0; i < 6; i++){
		y = bdt.decision_function(x[i]);
		std::cout << y << std::endl;
	}
}
