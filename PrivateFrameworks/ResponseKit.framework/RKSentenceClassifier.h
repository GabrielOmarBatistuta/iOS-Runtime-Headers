/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@class NSArray, NSString, NSValue;

@interface RKSentenceClassifier : NSObject {
    NSArray *_alternatives;
    NSArray *_appreciations;
    NSArray *_choiceDelimiters;
    NSArray *_interrogatives;
    NSArray *_inversions;
    NSArray *_sentenceEntities;
    BOOL _sentenceHasAlternativeConjunction;
    BOOL _sentenceHasQuestionTerminator;
    BOOL _sentenceIsAllSymbols;
    BOOL _sentenceIsTerminated;
    NSString *_sentenceString;
    NSString *_sentenceStringOriginal;
    NSValue *_sentenceTag;
}

@property(readonly) NSString * alternativeConjunction;
@property(retain) NSArray * alternatives;
@property(retain) NSArray * appreciations;
@property(retain) NSArray * choiceDelimiters;
@property(retain) NSArray * interrogatives;
@property(retain) NSArray * inversions;
@property(retain) NSArray * sentenceEntities;
@property BOOL sentenceHasAlternativeConjunction;
@property BOOL sentenceHasQuestionTerminator;
@property BOOL sentenceIsAllSymbols;
@property BOOL sentenceIsTerminated;
@property(retain) NSString * sentenceString;
@property(retain) NSString * sentenceStringOriginal;
@property(retain) NSValue * sentenceTag;

+ (id)alternativeInversionsForLanguage:(id)arg1;
+ (id)appreciationKeywordsForLanguage:(id)arg1;
+ (BOOL)canClassifyLanguageIdentifier:(id)arg1;
+ (unsigned int)categoryForPreferenceKey:(id)arg1;
+ (id)categoryKeywordMapForLanguage:(id)arg1;
+ (id)keyToCategoryMap;
+ (id)languageIdentifierFromClassName;
+ (id)lexicalEntitiesFromString:(id)arg1;
+ (id)polarTagRegularExpressionForLanguage:(id)arg1;
+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2;
+ (id)preferenceKeyForCategory:(unsigned int)arg1;
+ (id)sensitiveSubjectRegularExpressionForLanguage:(id)arg1;
+ (id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned int)arg3;
+ (id)stringFromLexicalEntities:(id)arg1;
+ (Class)subclassForLanguageIdentifier:(id)arg1;
+ (Class)subclassForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)alternativeConjunction;
- (id)alternatives;
- (void)analyzeSentence;
- (id)appreciations;
- (id)choiceDelimiters;
- (id)classifySentence;
- (id)interrogatives;
- (id)inversions;
- (BOOL)isLexicalClassAvailable;
- (id)languageIdentifier;
- (id)sentenceClassification:(id)arg1 options:(unsigned int)arg2;
- (id)sentenceEntities;
- (BOOL)sentenceHasAlternativeConjunction;
- (BOOL)sentenceHasQuestionTerminator;
- (BOOL)sentenceIsAllSymbols;
- (BOOL)sentenceIsTerminated;
- (id)sentenceString;
- (id)sentenceStringOriginal;
- (id)sentenceTag;
- (void)setAlternatives:(id)arg1;
- (void)setAppreciations:(id)arg1;
- (void)setChoiceDelimiters:(id)arg1;
- (void)setInterrogatives:(id)arg1;
- (void)setInversions:(id)arg1;
- (void)setSentenceEntities:(id)arg1;
- (void)setSentenceHasAlternativeConjunction:(BOOL)arg1;
- (void)setSentenceHasQuestionTerminator:(BOOL)arg1;
- (void)setSentenceIsAllSymbols:(BOOL)arg1;
- (void)setSentenceIsTerminated:(BOOL)arg1;
- (void)setSentenceString:(id)arg1;
- (void)setSentenceStringOriginal:(id)arg1;
- (void)setSentenceTag:(id)arg1;

@end
