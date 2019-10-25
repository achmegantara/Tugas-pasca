imds = imageDatastore ('Sample10', 'IncludeSubfolders',true,'LabelSource','foldernames');

tbl = countEachLabel(imds);
[trainingSet, validationSet] = splitEachLabel(imds, 0.75, 'randomize');

bag = bagOfFeatures(imageSet(imds.Files));

img = readimage (imds,1);
featureVector = encode(bag,img);

csvwrite('bag10.csv',featureVector);

figure
bar(featureVector)
title('Visual word occurrences')
xlabel('Visual word index')
ylabel('Frequency of occurrence')

%categoryClassifier = trainImageCategoryClassifier(trainingSet, bag);
