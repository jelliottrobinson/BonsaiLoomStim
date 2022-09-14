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


