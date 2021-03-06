/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSArray, NSMutableArray;

@interface MPUAbbreviatingLabel : UILabel {
    NSMutableArray *_textRepresentationSizes;
    NSArray *_textRepresentations;
}

@property(copy) NSArray * textRepresentations;

- (void).cxx_destruct;
- (void)_calculateTextSizes;
- (void)_selectBestRepresentation;
- (void)_setTextRepresentation:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setText:(id)arg1;
- (void)setTextRepresentations:(id)arg1;
- (id)textRepresentations;

@end
