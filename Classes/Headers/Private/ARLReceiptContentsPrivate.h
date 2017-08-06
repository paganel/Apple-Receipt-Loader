/* *********************************************************************

        Copyright (c) 2010 - 2017 Codeux Software, LLC
     Please see ACKNOWLEDGEMENT for additional information.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:

 * Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
 * Neither the name of "Codeux Software, LLC", nor the names of its 
   contributors may be used to endorse or promote products derived 
   from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 SUCH DAMAGE.

 *********************************************************************** */

NS_ASSUME_NONNULL_BEGIN

@interface ARLReceiptContents ()
@property (nonatomic, copy, readwrite) NSString *bundleId;
@property (nonatomic, copy, readwrite) NSData *bundleIdData;
@property (nonatomic, copy, readwrite) NSData *opaqueData;
@property (nonatomic, copy, readwrite) NSData *hashData;
@property (nonatomic, copy, readwrite) NSDate *originalPurchaseDate;
@property (nonatomic, copy, readwrite) NSString *originalPurchaseVersion;
@property (nonatomic, copy, readwrite) NSArray<ARLInAppPurchaseContents *> *inAppPurchases;

- (instancetype)initWithData:(NSData *)signedData NS_DESIGNATED_INITIALIZER;
@end

@interface ARLInAppPurchaseContents ()
@property (nonatomic, assign, readwrite) NSUInteger quantity;
@property (nonatomic, copy, readwrite) NSString *productId;
@property (nonatomic, copy, readwrite) NSString *transactionId;
@property (nonatomic, copy, readwrite) NSString *originalTransactionId;
@property (nonatomic, copy, readwrite) NSDate *purchaseDate;
@property (nonatomic, copy, readwrite) NSDate *originalPurchaseDate;

- (instancetype)initWithData:(NSData *)signedData NS_DESIGNATED_INITIALIZER;
@end

NS_ASSUME_NONNULL_END
