//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (TmuxStateParser)
+ (void)clearStringCache;
+ (id)sparkWithHeight:(double)arg1;
+ (id)it_formatBytesCompact:(double)arg1;
+ (id)it_formatBytes:(double)arg1;
+ (id)uuid;
+ (id)stringForModifiersWithMask:(unsigned long long)arg1;
+ (id)stringWithHexEncodedString:(id)arg1;
+ (id)shellEscapableCharacters;
+ (id)stringFromPasteboard;
+ (id)stringWithLongCharacter:(unsigned int)arg1;
+ (BOOL)isDoubleWidthCharacter:(int)arg1 ambiguousIsDoubleWidth:(BOOL)arg2 unicodeVersion:(long long)arg3;
+ (id)stringWithInt:(int)arg1;
+ (id)stringWithHumanReadableSize:(unsigned long long)arg1;
- (id)intlistValue;
- (id)numberValue;
- (id)paneIdNumberValue;
- (id)tsvDocumentWithFields:(id)arg1;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)enumerateStringsSeparatedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (BOOL)enumerateStringsSeparatedByRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)enumerateStringsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (BOOL)enumerateStringsMatchedByRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeys:(id *)arg5 forCaptures:(int *)arg6 count:(unsigned long long)arg7;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withFirstKey:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeysAndCaptures:(id)arg5;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 range:(struct _NSRange)arg2 withKeysAndCaptures:(id)arg3;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 withKeysAndCaptures:(id)arg2;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeys:(id *)arg5 forCaptures:(int *)arg6 count:(unsigned long long)arg7;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withFirstKey:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeysAndCaptures:(id)arg5;
- (id)dictionaryByMatchingRegex:(id)arg1 range:(struct _NSRange)arg2 withKeysAndCaptures:(id)arg3;
- (id)dictionaryByMatchingRegex:(id)arg1 withKeysAndCaptures:(id)arg2;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1;
- (id)captureComponentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)captureComponentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)captureComponentsMatchedByRegex:(id)arg1;
- (id)componentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (id)componentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)componentsMatchedByRegex:(id)arg1 capture:(long long)arg2;
- (id)componentsMatchedByRegex:(id)arg1;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2 range:(struct _NSRange)arg3;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2;
- (id)stringByMatching:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (id)stringByMatching:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)stringByMatching:(id)arg1 capture:(long long)arg2;
- (id)stringByMatching:(id)arg1;
- (struct _NSRange)rangeOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (struct _NSRange)rangeOfRegex:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfRegex:(id)arg1 capture:(long long)arg2;
- (struct _NSRange)rangeOfRegex:(id)arg1;
- (void)flushCachedRegexData;
- (BOOL)isRegexValidWithOptions:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)isRegexValid;
- (BOOL)isMatchedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4;
- (BOOL)isMatchedByRegex:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)isMatchedByRegex:(id)arg1;
- (id)componentsSeparatedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)componentsSeparatedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)componentsSeparatedByRegex:(id)arg1;
- (long long)captureCountWithOptions:(unsigned int)arg1 error:(id *)arg2;
- (long long)captureCount;
- (BOOL)caseInsensitiveHasPrefix:(id)arg1;
- (id)stringByReplacingCharactersAtIndices:(id)arg1 withStringFromBlock:(CDUnknownBlockType)arg2;
- (id)stringByPerformingOrderedSubstitutions:(id)arg1;
- (id)it_escapedForEnv;
- (double)it_localizedDoubleValue;
- (id)it_normalizedTokens;
- (id)stringByAppendingPathComponents:(id)arg1;
- (id)stringByTrimmingOrphanedSurrogates;
- (id)stringByAppendingVariablePathComponent:(id)arg1;
- (id)stringByKeepingLastCharacters:(long long)arg1;
- (id)stringByDroppingLastCharacters:(long long)arg1;
- (id)stringByEscapingForSandboxLiteral;
- (id)it_twoPartVersionNumber;
- (BOOL)it_hasPrefix:(id)arg1;
- (long long)it_numberOfLines;
- (id)it_jsonSafeValue;
@property(readonly, nonatomic) NSString *jsonEncodedString;
- (BOOL)startsWithEmoji;
- (void)it_drawInRect:(struct CGRect)arg1 attributes:(id)arg2;
- (struct CGRect)it_boundingRectWithSize:(struct CGSize)arg1 attributes:(id)arg2 truncated:(char *)arg3;
- (id)stringByMakingControlCharactersToPrintable;
- (struct _NSRange)makeRangeSafe:(struct _NSRange)arg1;
- (BOOL)startsWithDigit;
- (BOOL)isNumeric;
- (id)surname;
- (id)codePoints;
- (id)stringByEscapingForXML;
- (id)stringByEscapingForJSON;
- (id)stringByInsertingTerminalPunctuation:(id)arg1;
- (BOOL)isInQuotationMarks;
- (BOOL)endsWithQuotationMark;
- (BOOL)startsWithQuotationMark;
- (unsigned int)firstCharacter;
- (unsigned long long)hashWithDJB2;
- (id)stringByCompactingFloatingPointString;
- (id)attributesUsingFont:(id)arg1 fittingSize:(struct CGSize)arg2 attributes:(id)arg3;
- (unsigned long long)iterm_unsignedIntegerValue;
- (void)reverseEnumerateSubstringsEqualTo:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)byTruncatingComposedCharactersInCenter:(long long)arg1;
- (long long)numberOfComposedCharacters;
- (id)lastComposedCharacter;
- (id)firstComposedCharacter:(id *)arg1;
- (void)enumerateComposedCharacters:(CDUnknownBlockType)arg1;
- (BOOL)stringMatchesGlobPattern:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)doubleDollarVariables;
- (id)stringByReplacingControlCharactersWithCaretLetter;
- (id)stringWithFirstLetterCapitalized;
- (id)ellipsizedDescriptionNoLongerThan:(int)arg1;
- (unsigned long long)numberOfLines;
- (id)stringRepeatedTimes:(int)arg1;
- (void)enumerateSwiftySubstrings:(CDUnknownBlockType)arg1;
- (id)stringByPerformingSubstitutions:(id)arg1;
- (id)indicesOfCharactersInSet:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 fromIndex:(long long)arg2;
- (id)it_stringBySplittingOnFirstSubstring:(id)arg1;
- (id)keyValuePair;
- (double)heightWithAttributes:(id)arg1 constrainedToWidth:(double)arg2;
- (id)stringByExpandingVimSpecialCharacters;
- (id)metaCharacter;
- (id)controlCharacter;
- (id)hexCharacter;
- (id)octalCharacter;
- (unsigned long long)indexOfSubstring:(id)arg1 fromIndex:(unsigned long long)arg2;
- (id)decomposedStringWithHFSPlusMapping;
- (id)precomposedStringWithHFSPlusMapping;
- (id)_convertBetweenUTF8AndHFSPlusAsPrecomposition:(BOOL)arg1;
- (id)hexEncodedString;
- (id)fontValue;
- (BOOL)stringIsUrlLike;
- (id)it_unescapedTmuxWindowName;
- (id)it_contentHash;
- (id)stringByCapitalizingFirstLetter;
- (id)stringByTrimmingLeadingHyphens;
- (id)stringByRemovingTerminatingPunctuation;
- (id)stringByRemovingEnclosingBrackets;
- (struct _NSRange)rangeOfURLInString;
- (id)stringByRemovingEnclosingPunctuationMarks;
- (id)substringIncludingOffset:(int)arg1 fromCharacterSet:(id)arg2 charsTakenFromPrefix:(int *)arg3;
- (id)stringByTrimmingTrailingCharactersFromCharacterSet:(id)arg1;
- (id)stringByTrimmingTrailingWhitespace;
- (id)stringByBase64DecodingStringWithEncoding:(unsigned long long)arg1;
- (id)stringByTrimmingLeadingWhitespace;
- (id)stringWithOnlyDigits;
- (id)initWithUTF8DataIgnoringErrors:(id)arg1;
- (id)stringByEscapingQuotes;
- (id)stringByReplacingEscapedChar:(unsigned short)arg1 withString:(id)arg2;
- (id)stringByReplacingEscapedHexValuesWithChars;
- (id)dataFromHexValues;
- (id)stringByReplacingBackreference:(int)arg1 withString:(id)arg2;
- (id)stringByExpandingTildeInPathPreservingSlash;
- (id)componentsBySplittingStringWithQuotesAndBackslashEscaping:(id)arg1;
- (id)it_stringByExpandingBackslashEscapedCharacters;
- (id)it_compressedString;
- (id)componentsInShellCommand;
- (id)it_escapedForRegex;
- (void)enumerateLongCharacters:(CDUnknownBlockType)arg1;
- (id)it_substringToIndex:(long long)arg1;
- (id)componentsBySplittingProfileListQuery;
- (id)stringWithLinefeedNewlines;
- (id)stringWithShellEscapedTabs;
- (id)stringWithEscapedShellCharactersExceptTabAndNewline;
- (id)stringWithEscapedShellCharactersIncludingNewlines:(BOOL)arg1;
- (id)stringEscapedForBash;
- (id)stringWithBackslashEscapedShellCharactersIncludingNewlines:(BOOL)arg1;
- (long long)compareSerializedKeystroke:(id)arg1;
- (id)dateValueFromUTC;
- (id)dateValueFromUnix;
- (id)utf8Help;
- (id)timestampConversionHelp;
- (id)hexOrDecimalConversionHelp;
- (id)helpfulSynonyms;
- (long long)comparePointerActions:(id)arg1;
@property(readonly, nonatomic) BOOL gitDirtyBoolValue;
@end

