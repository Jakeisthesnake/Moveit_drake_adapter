Running journal of issues that I am working through with this project.

2/2/25

Working on the moveit_drake, but it seems that it would be nice to have the moveit underlay and the moveit_drake code all together so that I can keep track of all the weird debug edits that I make. Once I know what I am doing, I'll fork the moveit_drake project and continue working from there.

The big move of today is making an issue on the moveit2_tutorials page. While I will continue to nurse the belief that, with enough time, I could have worked through all of the issues I face on my own, I will likely go much faster towards making useful contributions if I ask for help. So I am starting with moveit2_tutorials (as opposed to moveit_drake) since ideally the tutorials should show how to make an adapter like this. Additionally, the tutorials gets a lot more traffic, so more likely someone may decide to chime in with tips. The result of the tutorials issue will be to update the adapter tutorial as well as actually understand how the moveit_drake project works. Then I can put this repo to rest and start working on the moveit_drake repo directly.

(Oh, and I expect that I'll get a bunch of tips on dbugging and communicating about softwae issues.)

With that said, right now I am trying to modify the motion planning pipeline tutorial to use a pendulum that includes moveit_drake's toppra trajectory adapter. The issue I am currently facing seems to be some sort of mutex deadon in current_state_monitor during the constructor for the moveit_cpp node.

Ok, the side quest issue of the day is getting a traceback at the spot where the deadlock seems to be happening. I have bumped into this while trying to get a traceback so you all could see where my issue is.
