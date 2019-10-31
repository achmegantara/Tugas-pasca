clc
clear
%imgFolder = fullfile(toolboxdir('vision'),'visiondata','Image_1-500');
imds = imageDatastore ('Image_1001-1500', 'IncludeSubfolders',true,'LabelSource','foldernames');

bag = bagOfFeatures(imageSet(imds.Files));

for i=1:500
img = readimage(imds,i);
featureVector = encode(bag,img);
dlmwrite('bag1001-1500.csv',featureVector,'-append');
end