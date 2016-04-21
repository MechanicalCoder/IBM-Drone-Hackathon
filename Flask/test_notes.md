After lot of efforts, I finally got this thing working. I don't know whether these things are really this much complex or am I slow in understanding.

I mean, first I had a hard time finding the way to configure the file. It is what exported from app.config.from_envvar() and I didn't know what it actually wanted. This was mentioned as the first step to run the Flaskr app on Github.

First I learnt a bit about what .cfg file is and what it does. Then I moved on with the Google query about configuring the flask app. Though I didn't find the exact solution, I found the docs on how a sample configuration file actually looks. 

I just wrote a simple flaskrconfig.cfg file, saved it on desktop and pointed the flaskr configuration path to this file by SET FLASKR_SETTINGS= \path\to\flaskrconfig.cfg. Then as instructed I initialized the database. Fortunately it got started at once without any error.

One more things was to get 'flask' command working in the command line. Earlier it was not getting recognized as command or module but as laze as I'm, I was getting around with it by typing 'python -m flask' but later I got stuck at that db initialization stage and I seriously needed to integrate flask command with cli.

I'm not whether this is something downside for windows or it is same for any OS. After database initialization, I ran the app and to my excitement totally fine until I clicked on login. Silly mistakes- I've always been bugged by this! I'm sure most of people get bugged. Earlier I had moved the layout, login and show_entries files to the 'templates' folder but the files that I was editing from sublime_text remained the earlier files. I should have opened the file from new location.

Like a fool, I was editing the older files and expecting the app to run perfectly. Even after editing, the same error was being shown - I didn't know how. I even copy-pasted the code from github directly but in the place of older file. Then it struck and I modified the correct file. Now its working perfeclty and I'm able to write this note :) A big time learning!

Earlier I had separated my paragraphs ('enter') but in the final displaying, everything is squeezed into one paragraph.
This time I'm going to put 'br' tag to see if it changes line.