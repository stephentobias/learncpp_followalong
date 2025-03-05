# learncpp_followalong

## Introduction
This is a central repo for all my code related to [LearnCPP](https://www.learncpp.com/) lessons starting with chapter 3. These lessons were supplemented with [The Cherno's](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb) videos on youtube. 

While working through chapters 1 & 2, I was not familiar with how to use git to track multiple projects in one repo. Those chapters are tracked in separate repos: 

- [first_simple_program_1_11_lcpp](https://github.com/stephentobias/first_simple_program_1_11_lcpp)
- [first_simple_program_1_11_lcpp_cmakebuild](https://github.com/stephentobias/first_simple_program_1_11_lcpp_cmakebuild)
- [lcpp_ch1_quiz](https://github.com/stephentobias/lcpp_ch1_quiz)
- [chapter_2](https://github.com/stephentobias/chapter_2)
	
I think I've figured out how to centralize everything so I don't end up with multiple repos for these lessons. This repo is my attempt at doing that. 

I may attempt to migrate the other repos into this one at some point but I need to figure out if I need to change the remote origin and how to do that without deleting the commit logs. As of 3/3/2025, they have not been migrated. 

## My IDE
I may jump between Visual Studio Community and Code::Blocks while submitting code for these lessons. I haven't decided which I like best overall. 

### Visual Studio Community
#### Pros: 
It has a nice dark mode and good highlighting. After getting used to the UI it's relatively easy to get through. It also lets me follow along with The Cherno's videos (referenced above). 
#### Cons: 
It creates a lot of extra files for the project and the repos look messy. This is highlighted by the relatively large .gitignore file I have to include in each project. It does not easily support Arduino development. At least, not that I could find online. 

### Code::Blocks
#### Pros:
It is easy to navigate. It creates very few extra files and looks cleaner. Again, highlighted by the relatively small .gitignore file. It can also be used to develop projects for Arduino, which is a future goal. 
#### Cons: 
The UI is not as polished as Visual Studio. It feels clunky, though I have yet to have an issue with it. The dark mode is also not that great. It only darkens the editor but the rest of window is still bright. 

After starting to use the debugger on both IDEs, they both more or less work the same from what I can tell so far. The bad thing about Code::Blocks' is that it doesn't keep the layout that I create such as keeping the call stack, disassembler, etc. windows open. Maybe I need to research a bit more.

### Summary:
I may end up using both for each project since it helps me practice setting up projects in each IDE. I will later link a how-to guide for myself that walks through the steps in setting up the projects for each one. Disclaimer: The how-to guide will be from what I was able to figure out on my own. I am not an experienced developer and don't yet understand the process enough to know if the process is missing important steps. Unfortunately, I was unable to find any guides online that adequately explained how to setup existing projects in each of the IDEs if they don't include the respective project files. More info will be provided when I make that guide. 