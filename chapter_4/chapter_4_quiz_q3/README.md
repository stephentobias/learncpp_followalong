# Chapter 4 quiz - Q3
## Question: 
> Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).
> Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2
> Expected output:
> ```
> Enter the height of the tower in meters: 100
> At 0 seconds, the ball is at height: 100 meters
> At 1 seconds, the ball is at height: 95.1 meters
> At 2 seconds, the ball is at height: 80.4 meters
> At 3 seconds, the ball is at height: 55.9 meters
> At 4 seconds, the ball is at height: 21.6 meters
> At 5 seconds, the ball is on the ground.
> ```
> 
> Note: Depending on the height of the tower, the ball may not reach the ground in 5 seconds -- that’s okay. We’ll improve this program once we’ve covered loops.
> 
> Note: The `^` symbol isn’t an exponent in C++. Implement the formula using multiplication instead of exponentiation.
> 
> Note: Remember to use double literals for doubles, e.g. `2.0` rather than `2`.

## Notes
This is the first project that will attempt to use makefiles. I'm still unfamiliar with the make build process so there may be some hiccups. The makefiles for debug and release versions are included both as templates in the parent folder and as active versions in their respective folders. 

I'm also using a new IDE (which I will update on the main page soon) Geany. I moved my dev environment to a Raspberry Pi just to experiment a little. So far so good.

