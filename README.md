# MicroMouse
This is our repository for micromouse, we will write our code here.

Here are the steps you need to clone my directory, 
--------------------------------------------------

First things first:
-------------------

1)Make an account on this website. No brainer :D

2)You will need to download git on your computer, or your computer already has it, you can check if you just run git in the terminal and get a list of [git] commands.


The steps below are from the terminal. There is also a GUI that you can download use but I prefer the terminal better:

First: 
------
Declare yourself to git on your terminal using:

$ git config --global user.name "BLAH"

$ git config --global user.email "BLAH@email"

Now you can clone my directory, choose a place where you want the repository to live

And copy my directory using:

$ git clone https://github.com/cat-matta/MicroMouse.git

Yay, now you have my files!
--------------------------

So now is where the fun stuff starts:

Say you have changed the micromouse file, to see the differences made write in the terminal:

$ git diff

This will show you the things that change

Next up you wanna upload the code, so we start with:

$ git add .  (notice there is a "DOT")

$ git commit -m "PUT A MESSAGE HERE"    (its good for everyone to know what you did)

$ git push

And that's it, simple right?

Now if you want to copy someone else's code to your system (it doesn't update automatically), you would run:

$ git pull
[OR]
$ git pull --no-edit

And now you have the most recent code, the --no-edit basically doesn't edit what you have and nicely merges what we have


NOTE NOTE NOTE
---------------
When using git and editing files, everyone has to be on the [SAME PAGE]. Meaning that if I did a change and you didn't pull it and then you edit the code and push it, there will be a merge conflict. So always run:

$ git pull
[OR]
$ git pull --no-edit


