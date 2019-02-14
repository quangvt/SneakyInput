# SneakyButton & SneakyJoystick
Support to add Joystick & Button to Control Input Layer of Game.
  - Joystick on the bottom left corner
  - Button(s): Jump, Attack,.. on the bottom right corner

# Environment
  - Cocos2d-x v3.17.1
  - C++
 
# References

  - https://github.com/cjhanson/SneakyJoystick
  - https://github.com/0x76db/cocos2d-x-sneaky-joystick

# How To Test (by )
  - Open SneakyInput/proj.ios_mac/SneakyInput.xcodeproj by Xcode 
  - Enable multitouch for project (https://stackoverflow.com/a/54646945/7019803) by: 
  Open file RootViewController.mm
![](https://user-images.githubusercontent.com/11188632/52761046-6dd38980-3044-11e9-8c55-e145d6f4f161.png)
  
  Change this line
```sh
[eaglView setMultipleTouchEnabled:NO];
```
  to
```sh
[eaglView setMultipleTouchEnabled:YES];
```
  - And finally RUN

Happy Coding!
 


