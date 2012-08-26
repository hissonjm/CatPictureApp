/**
* @file CatPictureApp.app
* Changes the color of the screen from blue to red
*
* @author Jason Hissong
* @date 2012-08-26
*/

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

	/// red, green, and blue need to be between 0.0 and 1.0
	float red;
	float green;
	float blue;
};

void CatPictureAppApp::setup()
{
	/// sets the screen to start at blue
	red = 0.0f;
	green = 0.0f;
	blue = 1.0f;
}

void CatPictureAppApp::mouseDown( MouseEvent event )
{
}

/// Changes the value of the color component 
void CatPictureAppApp::update()
{
	red = red + 0.005f;
	blue = blue - 0.005f;

	/// when red reaches 1.0, it is reset back to its original setting
	if(red > 1.0f){
		red = 0.0f;	
	}
	
	/// when blue reaches 0.0, it is reset back to its original setting
	if (blue < 0.0f){
		blue = 1.0f;
	}
}

void CatPictureAppApp::draw()
{
	/// Draws the screen with a different color based on the color value
	gl::clear( Color(red, green, blue ) );


}

CINDER_APP_BASIC( CatPictureAppApp, RendererGl )
