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
	float brightness;
};

void CatPictureAppApp::setup()
{
	brightness = 0.0f;
}

void CatPictureAppApp::mouseDown( MouseEvent event )
{
}

void CatPictureAppApp::update()
{
	brightness = brightness + 0.01f;
	if(brightness > 1.0f){
		brightness = 0.0f;
	}
}

void CatPictureAppApp::draw()
{
	// clear out the window with black
	gl::clear( Color(brightness, brightness, brightness ) ); 
}

CINDER_APP_BASIC( CatPictureAppApp, RendererGl )
