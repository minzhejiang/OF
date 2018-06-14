
// these are for the programmable pipeline system
uniform mat4 modelViewProjectionMatrix;  // this is a 4*4 matrix
attribute vec4 position;

// this is going to be passed in our program
uniform float time;


void main()
{
    // the sine wave travels along the x-axis (across the screen),
    // so we use the x coordinate of each vertex for the calculation,
    // but we displace all the vertex along the y axis (up the screen)/
    float displacementHeight = 100.0;
    float displacementY = sin(time + (position.x / 100.0)) * displacementHeight;
    //apply the matrix to position, so you get a new vec4 with modified position
    vec4 modifiedPosition = modelViewProjectionMatrix * position;
	
    modifiedPosition.y += displacementY;
	gl_Position = modifiedPosition;
}
