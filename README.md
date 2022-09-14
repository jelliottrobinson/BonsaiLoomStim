# BonsaiLoomStim

The files contained in this repository run in the editor of the visual programming language, Bonsai.
Use these files to generate visual, looming stimuli used in Gonzalez and Fisher et. al. 

## Set Up
Download Bonsai from [Open Ephys](https://bonsai-rx.org/docs/articles/installation.html)

Upon opening Bonsai, select the "Manage Packages" option and install the following packages:
- Bonsai - Starter Pack
- BonVision (Found under the "Community Packages" source)

To run the files:
1. Open any of the files to display the Bonsai workflow. 
2. Right click on the "SerialStringWrite" node and select "disable". This node is used to send a message to an Arduino to send a TTL signal to another device when an animation begins. This is not needed to display the visual stimuli.
3. Click start or press f5.

### Enable TTL through Arduino

1. Upload the receiveString_sendTTL.ino file to an Arduino device. 
2. Click on the 'SerialStringWrite" node in the Bonsai editor and select the port name for the Arduino device.
3. Click start or press f5. 

## File Descriptions

FadeIn_VariableRate.bonsai - Presents a transition from black to white over a period of 0.01s (Instantaneous), 0.5s, 1s, 2s, or 10s. Each stimulus presentation is paired with a TTL output using Arduino that can be enabled/disabled. Each transition time is presented 5 times in a randomized, fixed order for a total of 25 trials. The start of each fade-in is 130s apart. This allows for a 2min inter-trial interval (ITI) with 10 seconds to display each fade-in.

FadeIn_VariableRate_LessThan0.5sec.bonsai - Same as previous, but the transition times are 0.05s, 0.1s, 0.2s, 0.3s, and 0.4s.

Loom Bonsai Files - Presents 5 repetitions of a variation of the looming stimulus on a 10min timer. The timer resets at completion of the stimulus presentation. Each stimulus presentation is paired with a TTL output using Arduino that can enabled/disabled. 
- Looming Stimulus: A black circle expands at a fixed rate on a light gray background.
- Color Inverted Loom: A light gray circle expands at a fixed rate on a black background.
- Rededing Loom: A black circle appears at full expansion on a light gray background and recedes until disappearing.
- Color Inverted Receding Loom: A light gray circle appears at full expansion on black background and recedes until disappearing.
- Static Loom: A black circle appears at full expansion on a light gray background and disappears after a fixed time that matches the expansion time of the looming stimulus.
- Color Inverted Static Loom: A light gray circle appears at full expansion on a black background and disappears after a fixed time that matches the expansion time of the looming stimiulus.

receiveString_sendTTL.ino - Arduino sets pin 12 to HIGH for 10ms upon reception of a string '\n'.

