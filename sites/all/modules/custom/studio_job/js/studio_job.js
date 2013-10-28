(function($) {

	Drupal.behaviors.studio_auto_calculate = {
		attach : function(context) {
			$("#edit-field-advance-amount-und-0-value").keyup(function() {
			  var advance = parseInt($(this).val());
				if (isNaN(advance)) {
				  advance = 0;
				}
				  var total = parseInt($("#edit-field-price-und-0-value").val());
				  if(advance > total){
				    alert("Advance ammount is more than total");
				  }
				  else{
				    var remaining = total - advance;
				    $("#edit-field-remaining-amount-und-0-value").val(parseInt(remaining));
				  }
			});
			$("#edit-field-price-und-0-value").keyup(function() {
				  var total = parseInt($(this).val());
					if (isNaN(total)) {
					  total = 0;
					}
					var advance = parseInt($("#edit-field-advance-amount-und-0-value").val());
					if(isNaN(advance)){
					  advance = 0;    
					}
					if(advance > total){
					  alert("Advance ammount is more than total");
					}
					else{
					  var remaining = total - advance;
					  $("#edit-field-remaining-amount-und-0-value").val(parseInt(remaining));
					}
			});
		}
	}

})(jQuery);