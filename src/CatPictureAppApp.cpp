#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPictureAppApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

private:
	float red;
	float green;
	float blue;
};

void CatPictureAppApp::setup()
{
	red = 0.0f;
	green = 0.0f;
	blue = 1.0f;
}

void CatPictureAppApp::mouseDown( MouseEvent event )
{
}

// Changes the value of the color component 
void CatPictureAppApp::update()
{
	red = red + 0.005f;
	blue = blue - 0.005f;

	if(red > 1.0f){
		red = 0.0f;	
	}
	
	if (blue < 0.0f){
		blue = 1.0f;
	}
}

void CatPictureAppApp::draw()
{
	// Draws the screen with a different color based on the color value
	gl::clear( Color(red, green, blue ) );

}

CINDER_APP_BASIC( CatPictureAppApp, RendererGl )
