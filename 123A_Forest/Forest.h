
#include "Tree.h"
#include "Shape.h"


class Forest {
     private:
		int H, W;
		
		vector<Shape*> trees;
		int** tab;
     public:
		Forest(int H, int W);
		~Forest();
		
		void AddShape(Shape* sh, int y, int x); 
		void PrintForest();

		Forest& operator+=(Shape* sh);
};
