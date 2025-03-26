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

**Note:** *This is not a repository of notes.* It simply houses my code for working through examples and lesson exercises/quiz questions. I will provide explanation where possible but this is not quaranteed.

## My IDE
I may jump between Visual Studio Community and Code::Blocks while submitting code for these lessons. I haven't decided which I like best overall. 

As of 3/10/2025, I have a migrated to a combined dual dev environment setup. By which I mean, I have 2 different environments I am using to code. One is the original environment on my laptop (Windows), which uses either Visual Studio 2022 or Code::blocks as an IDE. The new dev env is on a Raspberry Pi (Raspbian, which uses Geany as an IDE. I just wanted to tinker about. On the Pi, I didn't want to install anything too heavy so I'm trying out the pre-installed IDE, Geany. See my notes about it below.

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


### Geany & Raspberry Pi dev environment
#### General notes:
It's definitely not as polished as VS. I haven't decided if I like it yet. So far it seems very simple. I haven't used it too much since I took this opportunity to learn how to use Make from the command line. 

One major drawback so far is that it doesn't allow me to see the definitions of the C++ standard libraries. VS usually allows me to go to the standard library source code to at least see it, which is a good learning experience. Geany does not. I haven't tried this with Code::Blocks but this might be a good reason to switch over to VS a majority of the time. 
Another thing is that Geany doesn't have a built-in debugger that I can see. I need to explore it more. 

### Summary:
I may end up using both for each project since it helps me practice setting up projects in each IDE. I will later link a how-to guide for myself that walks through the steps in setting up the projects for each one. Disclaimer: The how-to guide will be from what I was able to figure out on my own. I am not an experienced developer and don't yet understand the process enough to know if the process is missing important steps. Unfortunately, I was unable to find any guides online that adequately explained how to setup existing projects in each of the IDEs if they don't include the respective project files. More info will be provided when I make that guide. 


## Pace of work
Currently I'm attempting 2 Learncpp chapters a week but will not commit to it fully. I may need to vary the pace to account for my personal schedule as well as the difficulty of the lessons. Hopefully I can at least hit the average. 
