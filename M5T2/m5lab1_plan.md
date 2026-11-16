# Plan: The Spooky House

## Story

You are driving home late at night when your car breaks down beside an old house. It is dark outside, and the house looks like nobody has lived there in years. You decide to investigate. You can try the front door, go around to the back, or leave and go home. Inside the house, you hear strange noises and find a hidden cellar. Depending on your choices, you might escape or get trapped inside.

## Story Map

main_menu
   1 -> choice_front_door
          1 -> choice_back_door
                 1 -> open_the_cellar
                        1 -> cellar_escape
                 2 -> choice_go_home
          2 -> choice_go_home

   2 -> choice_back_door
          1 -> open_the_cellar
                 1 -> cellar_escape
          2 -> choice_go_home

   3 -> choice_go_home
   4 -> quit

## Functions

- main_menu (starter)
- choice_front_door (starter)
- choice_back_door (starter, completed)
- choice_go_home (starter, completed)
- open_the_cellar (new)
- cellar_escape (new)