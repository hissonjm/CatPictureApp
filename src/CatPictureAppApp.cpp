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
};

void CatPictureAppApp::setup()
{
}

void CatPictureAppApp::mouseDown( MouseEvent event )
{
}

void CatPictureAppApp::update()
{
}

void CatPictureAppApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( CatPictureAppApp, RendererGl )
