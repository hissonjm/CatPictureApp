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

void CatPictureAppApp::update()
{
	red = red + 0.01f;
	blue = blue - 0.01f;
	if(red > 1.0f){
		red = 0.0f;
	}

	if(blue < 1.0f){
		blue = 1.0f;
	}
}

void CatPictureAppApp::draw()
{
	// clear out the window with black
	gl::clear( Color(red, green, blue ) );

}

CINDER_APP_BASIC( CatPictureAppApp, RendererGl )
