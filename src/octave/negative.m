function negative( orig_file_name )
    %NEGATIVE creează și afișează negativul imaginii primite

    orig_img = imread(orig_file_name);
    orig_pixels = cast(orig_img,'double');
    orig_pixels = orig_pixels/255.0;

    neg_pixels = orig_pixels;

    %% neg_pixels conține valori în intevalul [0,1]

    %% Exercițiul 1: negativul imaginii originale
    %% Exercițiul 1: completați aici

    %% Exercițiul 1: ----------

    neg_pixels = round(neg_pixels*255);
    neg_img = cast(neg_pixels,'uint8');
    neg_file_name = [orig_file_name(1:(size(orig_file_name,2)-4)) '_neg.jpg'];
    image(neg_img);
    imwrite(neg_img, neg_file_name);

end

%% Tudor Berariu, 2014