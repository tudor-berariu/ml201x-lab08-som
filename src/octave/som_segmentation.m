function som_segmentation( orig_file_name, n )
    %SOM_SEGMENTATION Segmentează o imaginie utilizand SOM

    orig_img = imread(orig_file_name);
    orig_pixels = cast(orig_img,'double');
    orig_pixels = orig_pixels/255.0;

    %% După rezolvarea Taskurilor 2, 3 și 4
    %% în fișierele learning_rate.m, radius.m și neighbourhood.m,
    %% rezolvați aici Taskurile 5 și 6.


    %% Exercițiul 5: antrenarea retelei Kohonen
    %% Exercițiul 5: completați aici
    W = rand(n,n,3) / 2;
    %% Exercițiul 5: ----------

    %% Exercițiul 6: compunerea imaginii segmentate pe baza ponderilor W
    %% Exercițiul 6: porniți de la codul din negative.m
    %% Exercițiul 6: completați aici

    % seg_pixels = TODO
    % seg_img = cast(seg_pixels,'uint8');
    % seg_file_name = TODO
    % image(seg_img)
    % imwrite(seg_img, seg_file_name);

    %% Exercițiul 6: ----------
end

%% Tudor Berariu, 2014