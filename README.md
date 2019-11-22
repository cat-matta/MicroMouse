# MicroMouse
This is our repository for micromouse, we will write our code here.

Here are the steps you need to clone my directory, you will need to download git on your computer and obv make an account on this website. The steps below are from the bash terminal (dont write $). There is also a GUI that you can use but I prefer the terminal better
----------------------------------------------------------------------------------------------------------------------------------------

First: 
------
Declare yourself to git on your bash using:

$ git config --global user.name "BLAH"
$ git config --global user.email "BLAH@email"

Now you can clone my directory, choose a place where you want it to locate
For example I want this in the desktop, 2 ways:
1. Just navigate to whatever directoy you want and open bash there
2. Be fancy and open bash anywhere and do this:

      $ cd ./Desktop
     You are now in the desktop and you can run the command below

Copy my directory using:

$ git clone https://github.com/cat-matta/MicroMouse.git

Yay, now you have my files!
----------------------------------------------------------------------------------------------------------------------------------------

So now is where the fun stuff starts:

Say you have changed the micromouse file, to see the differences made write in the terminal

$ git diff

This will show you the things that change

Next up you wanna upload the code, so we start with:

$ git add .   (notice there is a "DOT")
$ git commit -m "PUT A MESSAGE HERE"    (its good for everyone to know what you did)
$ git push

And that's it, simple right?

Now if you want to copy someone else's code to your system (it doesn't update automatically), you would run:

$ git pull --no-edit

And now you have the most recent code, the --no-edit basically doesn't edit what you have and nicely merges what we have


NOTE NOTE NOTE
---------------
When using git and editing files, everyone has to be on the SAME PAGE. Meaning that if I did a change and you didn't pull it and then you edit the code and push it, there will be a conflict. Git pull will REPLACE WHATEVER you . SO PLEASE BE CAREFULL and ALWAYS RUN:

$ git pull --no-edit


AGAIN ALWAYS RUN THIS COMMAND BEFORE YOU EDIT THE CODE SO THAT OUR FILES DON'T GET MESSED UP

If in the case of you editing and forgeting to pull, what you could do is

